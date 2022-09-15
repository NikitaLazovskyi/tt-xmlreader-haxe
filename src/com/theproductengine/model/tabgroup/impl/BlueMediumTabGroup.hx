package com.theproductengine.model.tabgroup.impl;

import com.theproductengine.model.tabgroup.TabGroupAbstract;
import com.theproductengine.ui.Tab;
import openfl.display.Sprite;
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
	private var scrollButton:Float = 20;
	private var mainSprite:Sprite;
	
	public function new(x:Float, y:Float, clearence:Float, tab:Tab, amount:Int, maxWidth:Float) 
	{
		mainSprite = new Sprite();

		backgroundTabColor = 0xB1CDEB;
		
		var txtFrmt:TextFormat = new TextFormat();		
		txtFrmt.align = TextFormatAlign.JUSTIFY;
		txtFrmt.size = 20;
		txtFrmt.leftMargin = 40;
		txtFrmt.rightMargin = 40;
		
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
		mainTab.width = maxWidth-scrollButton;
		mainTab.background = true;
		mainTab.backgroundColor = backgroundTabColor;
	}
}
