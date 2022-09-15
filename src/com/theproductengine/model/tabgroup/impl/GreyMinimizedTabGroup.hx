package com.theproductengine.model.tabgroup.impl;

import com.theproductengine.model.tabgroup.TabGroupAbstract;
import com.theproductengine.ui.Tab;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
/**
 * ...
 * @author Nikko
 */
class GreyMinimizedTabGroup extends TabGroupAbstract
{
	//inline static public var backgroundTabColor:Int = 0xAFB1B4;
	private var scrollButton:Float = 20;

	public function new(x:Float, y:Float, clearence:Float, tab:Tab, amount:Int, maxWidth:Float) 
	{
		backgroundTabColor = 0xAFB1B4;
		
		var txtFrmt:TextFormat = new TextFormat();		
		txtFrmt.align = TextFormatAlign.JUSTIFY;
		txtFrmt.size = 18;
		
		this.amount = amount;
		this.x = x;
		this.y = y;
		this.clearence = clearence;
		this.maxWidth = maxWidth;
		var txtFld:TextField = tab.getTextField();
		txtFld.setTextFormat(txtFrmt);
		txtFld.height = txtFld.height / 1.5;
		txtFld.border = false;
		this.example = tab;
		tabs = new Array();
		populateArray();
		
		mainTab = new TextField();
		mainTab.x = x;
		mainTab.y = y + tab.getTextField().height;
		mainTab.text = " ";
		mainTab.setTextFormat(txtFrmt);
		mainTab.border = false;
		mainTab.height = maxWidth/2.5;
		mainTab.width = maxWidth-scrollButton;
		mainTab.background = true;
		mainTab.backgroundColor = backgroundTabColor;
	}
	
}