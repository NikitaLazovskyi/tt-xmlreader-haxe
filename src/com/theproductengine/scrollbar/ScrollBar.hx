package com.theproductengine.scrollbar;
import openfl.display.DisplayObjectContainer;
import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.events.MouseEvent;

/**
 * ...
 * @author Nikko
 */
class ScrollBar 
{
	private var txtFld:TextField;
	private var parent:DisplayObjectContainer;
	
	private var offsetY:Float;
	private var yTopLimit:Float;
	private var yBottomLimit:Float;
	private var rectInnerBox:Sprite;
	private var rectOuter:Sprite;
	private var indexOutRect:Int;
	private var indexInRect:Int;
	
	public function new(txtFld:TextField) 
	{
		this.txtFld = txtFld;
		this.parent = txtFld.parent;
		if (txtFld.maxScrollV >= txtFld.scrollV && txtFld.maxScrollV != 1) {
			rectOuter = new Sprite();
			rectOuter.graphics.beginFill(0xA09DE1);
			rectOuter.graphics.lineStyle(1, 0x726CD2);
			rectOuter.graphics.drawRect(txtFld.x + txtFld.width, txtFld.y, 20, txtFld.height);
			rectOuter.graphics.endFill();
			parent.addChild(rectOuter);
			indexOutRect = parent.getChildIndex(rectOuter);
		
			rectInnerBox = new Sprite();
			rectInnerBox.graphics.beginFill(0x857DCC);
			rectOuter.graphics.lineStyle(1, 0x756CC6);
			rectInnerBox.graphics.drawRect(txtFld.x + txtFld.width, txtFld.y, 20, (txtFld.height / txtFld.maxScrollV) );
			rectInnerBox.graphics.endFill();
			
			yTopLimit = 0 * rectInnerBox.height;
			yBottomLimit = txtFld.maxScrollV * rectInnerBox.height - rectInnerBox.height;
			
			rectInnerBox.addEventListener(MouseEvent.MOUSE_DOWN, function (event:MouseEvent){
				startDragging(event);
			});
			rectInnerBox.addEventListener(MouseEvent.MOUSE_UP, function (event:MouseEvent){
				stopDragging(event);
			});
			parent.addChild(rectInnerBox);
			indexInRect = parent.getChildIndex(rectInnerBox);
			txtFld.addEventListener(MouseEvent.MOUSE_WHEEL, function(event:MouseEvent){
				rectInnerBox.y = (txtFld.scrollV-1) * rectInnerBox.height;
			});
		} else {
			parent.removeChild(rectInnerBox);
			parent.removeChild(rectOuter);
		}
		
	}
	
	private function startDragging (event:MouseEvent):Void {
		offsetY = event.stageY - rectInnerBox.y;
		parent.addEventListener (MouseEvent.MOUSE_MOVE, dragBar);
	}
	
	private function stopDragging (event:MouseEvent):Void {
		parent.removeEventListener (MouseEvent.MOUSE_MOVE, dragBar);
	}

	private function dragBar (event:MouseEvent):Void {
		if (event.stageY - offsetY > yTopLimit && event.stageY - offsetY < yBottomLimit) 
		{
			rectInnerBox.y = event.stageY - offsetY;
			txtFld.scrollV = Math.round(rectInnerBox.y / rectInnerBox.height + 1);
			event.updateAfterEvent();
		}
	}
	
	public function getRectOuter():Sprite
	{
		return this.rectOuter;
	}
	
	public function getRectInner():Sprite
	{
		return this.rectInnerBox;
	}
	
}