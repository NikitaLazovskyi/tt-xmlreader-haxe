package com.theproductengine.model.tabgroup.impl;

import com.theproductengine.model.TabModel;
import com.theproductengine.model.tabgroup.TabGroupAbstract;
import com.theproductengine.scrollbar.ScrollBar;
import com.theproductengine.ui.Tab;
import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import openfl.events.MouseEvent;
/**
 * ...
 * @author Nikko
 */
class BlueMediumTabGroup extends TabGroupAbstract
{
	//inline static public var backgroundTabColor:Int = 0xB1CDEB;
	private var scrollButton:Float = 20;
	private var rectInnerBox:Sprite;
	private var rectOuter:Sprite; 
	private var tabModelsData:Array<TabModel>;
	private var previousTab:TextField;
	private var secondaryColor:Int = 0xE9E9E9;
	
	public function new(x:Float, y:Float, clearence:Float, tab:Tab, tabModelsData:Array<TabModel>, maxWidth:Float) 
	{
		mainSprite = new Sprite();
		this.tabModelsData = tabModelsData;

		backgroundTabColor = 0xB1CDEB;
		
		var txtFrmt:TextFormat = new TextFormat();		
		txtFrmt.align = TextFormatAlign.JUSTIFY;
		txtFrmt.size = 20;
		txtFrmt.leftMargin = 40;
		txtFrmt.rightMargin = 40;
		
		this.amount = tabModelsData.length;
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
		mainSprite.addChild(mainTab);
		
		var i:Int = 1;
		var iteratorTabs = tabs.iterator();
		var iteratorData = tabModelsData.iterator();
		while (iteratorTabs.hasNext() && iteratorData.hasNext())
		{
			var data = iteratorData.next();
			var tab:TextField = iteratorTabs.next().getTextField();
			tab.text = data.getTabName();
		
			tab.addEventListener(MouseEvent.CLICK, function(event:MouseEvent)
			{
				changeTextOfMainTab(data.getTabContent(), cast(event.target, TextField));
				if (mainTab.maxScrollV >= mainTab.scrollV && mainTab.maxScrollV != 1) 
				{
					var scroll:ScrollBar = new ScrollBar(mainTab);
					rectOuter = scroll.getRectOuter();
					rectInnerBox = scroll.getRectInner();
				} 
				else 
				{
					mainTab.parent.removeChild(rectInnerBox);
					mainTab.parent.removeChild(rectOuter);
				}
			});
			mainSprite.addChild(tab);
			++i;
		}
		
		
	}
	
	
	private function changeTextOfMainTab(text:String, field:TextField):Void{
		mainTab.replaceText(0, mainTab.text.length, text);
		changeColorForTabLater(field);
	}

	private function changeColorForTabLater(tab:TextField){
		tab.backgroundColor = backgroundTabColor;
		if (previousTab != null && previousTab != tab)
		{
			previousTab.backgroundColor = secondaryColor;
		}
		previousTab = tab;
	}
}
