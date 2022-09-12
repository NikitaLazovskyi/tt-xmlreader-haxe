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
class BlueMediumTabGroup extends TabGroupAbstract
{
	//inline static public var backgroundTabColor:Int = 0xB1CDEB;
	
	public function new(x:Float, y:Float, clearence:Float, tab:Tab, amount:Int, maxWidth:Float) 
	{
		backgroundTabColor = 0xB1CDEB;
		
		var txtFrmt:TextFormat = new TextFormat();		
		txtFrmt.align = TextFormatAlign.CENTER;
		txtFrmt.size = 20;
		
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
		mainTab.text = " ";
		mainTab.setTextFormat(txtFrmt);
		mainTab.border = true;
		mainTab.height = maxWidth/2;
		mainTab.width = maxWidth;
		mainTab.background = true;
		mainTab.backgroundColor = backgroundTabColor;
	}
}
