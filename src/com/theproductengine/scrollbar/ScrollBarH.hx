package com.theproductengine.scrollbar;

import openfl.display.DisplayObjectContainer;
import openfl.display.Sprite;
import openfl.events.KeyboardEvent;
import openfl.text.TextField;
import openfl.events.MouseEvent;
/**
 * ...
 * @author Nikko
 */
class ScrollBarH
{
	private var txtFld:TextField;
	private var parent:DisplayObjectContainer;
	private var scrollButton:Int;

	private var offsetX:Float;
	private var xLeftLimit:Float;
	private var xRightLimit:Float;
	private var rectInnerBoxH:Sprite;
	private var rectOuterH:Sprite;
	private var indexOutRect:Int;
	private var indexInRect:Int;

	private var scrollK:Int = 100;

	public function new(txtFld:TextField, scrollButton:Int)
	{
		this.scrollButton = scrollButton;
		this.txtFld = txtFld;
		this.parent = txtFld.parent;
		rectOuterH = new Sprite();
		rectOuterH.graphics.beginFill(txtFld.backgroundColor);
		rectOuterH.graphics.lineStyle(1, txtFld.borderColor);
		rectOuterH.graphics.drawRect(txtFld.x, txtFld.y + txtFld.height, txtFld.width, scrollButton);
		rectOuterH.graphics.endFill();
		parent.addChild(rectOuterH);
		indexOutRect = parent.getChildIndex(rectOuterH);

		rectInnerBoxH = new Sprite();
		rectInnerBoxH.graphics.beginFill(txtFld.backgroundColor+0xAAAAAA);
		rectOuterH.graphics.lineStyle(1, txtFld.borderColor);
		rectInnerBoxH.graphics.drawRect(txtFld.x, txtFld.y + txtFld.height, ((txtFld.width ) / txtFld.maxScrollH) * scrollK, scrollButton);
		rectInnerBoxH.graphics.endFill();

		xLeftLimit = 0 * rectInnerBoxH.width;
		xRightLimit = txtFld.maxScrollH * (rectInnerBoxH.width / scrollK) - rectInnerBoxH.width;

		rectInnerBoxH.addEventListener(MouseEvent.MOUSE_DOWN, function (event:MouseEvent)
		{
			startDragging(event);
		});
		rectInnerBoxH.addEventListener(MouseEvent.MOUSE_UP, function (event:MouseEvent)
		{
			stopDragging(event);
		});
		parent.addChild(rectInnerBoxH);
		indexInRect = parent.getChildIndex(rectInnerBoxH);

	}

	private function startDragging (event:MouseEvent):Void
	{
		offsetX = event.stageX - rectInnerBoxH.x;
		parent.addEventListener (MouseEvent.MOUSE_MOVE, dragBar);
	}

	private function stopDragging (event:MouseEvent):Void
	{
		parent.removeEventListener (MouseEvent.MOUSE_MOVE, dragBar);
	}

	private function dragBar (event:MouseEvent):Void
	{
		//trace('event.stage:${event.stageX} offsetX:${offsetX} rectInnerBoxH.x:${rectInnerBoxH.x} txtFld.scrollH:${txtFld.scrollH} txtFld.maxScrollH:${txtFld.maxScrollH}');
		if (event.stageX - offsetX > xLeftLimit && event.stageX - offsetX < xRightLimit)
		{
			rectInnerBoxH.x = event.stageX - offsetX;
			txtFld.scrollH = Math.round(rectInnerBoxH.x / (txtFld.width  / (txtFld.maxScrollH + (scrollK *2))));
			event.updateAfterEvent();
		}
	}

	public function getRectOuter():Sprite
	{
		return this.rectOuterH;
	}

	public function getRectInner():Sprite
	{
		return this.rectInnerBoxH;
	}
}