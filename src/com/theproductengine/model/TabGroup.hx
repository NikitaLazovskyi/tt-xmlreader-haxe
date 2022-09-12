package com.theproductengine.builder;
import com.theproductengine.ui.Tab;
import haxe.macro.Expr.Var;
import openfl.text.TextField;
import openfl.text.TextFormat;

/**
 * TabGroup is the special designed object for displaying information in requeired format.
 * @author Nikko
 */
class TabGroup 
{
	private var mainTab:TextField;
	
	private var amount:Int;
	private var x:Float;
	private var y:Float;
	private var clearence:Float;
	private var maxWidth:Float;
	private var example:Tab;
	private var tabs:Array<Tab>;
	
	public function new(x:Float, y:Float, clearence:Float, tab:Tab, amount:Int, maxWidth:Float, txtFrmt:TextFormat, backgroundTabColor:Int) 
	{
		this.amount = amount;
		this.x = x;
		this.y = y;
		this.clearence = clearence;
		this.maxWidth = maxWidth;
		this.example = tab;
		tabs = new Array();
		populateArray();
		
		mainTab = new TextField();
		mainTab.x = x;
		mainTab.y = y + tab.getTextField().height;
		mainTab.text = "Some text";
		mainTab.setTextFormat(txtFrmt);
		mainTab.border = true;
		mainTab.height = maxWidth/2;
		mainTab.width = maxWidth;
		mainTab.background = true;
		mainTab.backgroundColor = backgroundTabColor;
	}
	
	public function getTabs():Array<Tab>
	{
		return this.tabs;
	}
	
	public function populateArray():Void
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
	
	public function getMainTextField():TextField
	{
		return this.mainTab;
	}
	
}