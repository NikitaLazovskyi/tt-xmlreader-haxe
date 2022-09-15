package com.theproductengine.scrollbar;

import openfl.display.DisplayObjectContainer;
import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.events.MouseEvent;

/**
 * ...
 * @author Nikko
 */
class ScrollBarV
{
	private var txtFld:TextField;
	private var parent:DisplayObjectContainer;
	private var scrollButton:Int;

	private var offsetY:Float;
	private var yTopLimit:Float;
	private var yBottomLimit:Float;
	private var rectInnerBoxV:Sprite;
	private var rectOuterV:Sprite;
	private var indexOutRect:Int;
	private var indexInRect:Int;

	public function new(txtFld:TextField, scrollButton:Int)
	{
		this.scrollButton = scrollButton;
		this.txtFld = txtFld;
		this.parent = txtFld.parent;
		rectOuterV = new Sprite();
		rectOuterV.graphics.beginFill(txtFld.backgroundColor);
		rectOuterV.graphics.lineStyle(1, txtFld.borderColor);
		rectOuterV.graphics.drawRect(txtFld.x + txtFld.width, txtFld.y, scrollButton, txtFld.height);
		rectOuterV.graphics.endFill();
		parent.addChild(rectOuterV);
		indexOutRect = parent.getChildIndex(rectOuterV);

		rectInnerBoxV = new Sprite();
		rectInnerBoxV.graphics.beginFill(txtFld.backgroundColor+0xAAAAAA);
		rectOuterV.graphics.lineStyle(1, txtFld.borderColor);
		rectInnerBoxV.graphics.drawRect(txtFld.x + txtFld.width, txtFld.y, scrollButton, (txtFld.height / txtFld.maxScrollV) );
		rectInnerBoxV.graphics.endFill();

		yTopLimit = 0 * rectInnerBoxV.height;
		yBottomLimit = txtFld.maxScrollV * rectInnerBoxV.height - rectInnerBoxV.height;

		rectInnerBoxV.addEventListener(MouseEvent.MOUSE_DOWN, function (event:MouseEvent)
		{
			startDragging(event);
		});
		rectInnerBoxV.addEventListener(MouseEvent.MOUSE_UP, function (event:MouseEvent)
		{
			stopDragging(event);
		});
		parent.addChild(rectInnerBoxV);
		indexInRect = parent.getChildIndex(rectInnerBoxV);
		txtFld.addEventListener(MouseEvent.MOUSE_WHEEL, function(event:MouseEvent)
		{
			rectInnerBoxV.y = (txtFld.scrollV-1) * rectInnerBoxV.height;
		});
	}

	private function startDragging (event:MouseEvent):Void
	{
		offsetY = event.stageY - rectInnerBoxV.y;
		parent.addEventListener (MouseEvent.MOUSE_MOVE, dragBar);
	}

	private function stopDragging (event:MouseEvent):Void
	{
		parent.removeEventListener (MouseEvent.MOUSE_MOVE, dragBar);
	}

	private function dragBar (event:MouseEvent):Void
	{
		if (event.stageY - offsetY > yTopLimit && event.stageY - offsetY < yBottomLimit)
		{
			rectInnerBoxV.y = event.stageY - offsetY;
			txtFld.scrollV = Math.round(rectInnerBoxV.y / rectInnerBoxV.height + 1);
			event.updateAfterEvent();
		}
	}

	public function getRectOuter():Sprite
	{
		return this.rectOuterV;
	}

	public function getRectInner():Sprite
	{
		return this.rectInnerBoxV;
	}
}
