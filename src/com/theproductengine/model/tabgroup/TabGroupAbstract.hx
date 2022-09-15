package com.theproductengine.model.tabgroup;

import com.theproductengine.scrollbar.ScrollBarV;
import com.theproductengine.ui.Tab;
import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.text.TextFormat;

/**
 * ...
 * @author Nikko
 */
abstract class TabGroupAbstract
{
	public var backgroundTabColor:Int;
	
	
	private var amount:Int;
	private var x:Float;
	private var y:Float;
	private var clearence:Float;
	private var maxWidth:Float;
	
	private var mainTab:TextField;
	private var example:Tab;
	private var tabs:Array<Tab>;
	
	private var mainSprite:Sprite;
	
	public function getTabs():Array<Tab>
	{
		return this.tabs;
	}
	
	public function getMainTextField():TextField
	{
		return this.mainTab;
	}
	
	private function populateArray():Void
	{
		var kWidth:Float = (maxWidth - ( (amount - 1) * clearence * 2) ) / amount;
		if (example.getTextField().width > kWidth) 
		{
			example.getTextField().width = kWidth;
		}
		example.getTextField().y = y;
		var previousX:Float = 0;
		for (i in 0...amount) 
		{
			if (i == 0) 
			{
				example.getTextField().x = x;
			}
			else
			{
				example.getTextField().x = previousX + clearence + example.getTextField().width + clearence;
			}
			tabs.push(example.clone());
			previousX = example.getTextField().x;
		}

	}
	
	public function getMainSprite():Sprite
	{
		return this.mainSprite;
	}
}