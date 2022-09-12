package com.theproductengine;

import com.theproductengine.factory.TabGroupFactory;
import com.theproductengine.factory.TabGroupType;
import com.theproductengine.model.tabgroup.TabGroupAbstract;
import com.theproductengine.model.tabgroup.impl.BlueMediumTabGroup;
import com.theproductengine.model.tabgroup.impl.GreyMinimizedTabGroup;
import com.theproductengine.model.TabModel;
import com.theproductengine.ui.Tab;
import com.theproductengine.xmlreader.XMLReader;
import haxe.io.Path;
import openfl.display.Sprite;
import openfl.filesystem.File;
import openfl.text.TextField;
import openfl.display.Shape;
import openfl.events.MouseEvent;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import sys.FileSystem;

/**
 * ...
 * @author Nikko
 */
class Main extends Sprite
{
	private var tabModelsData:Array<TabModel>;
	private var previousTab:TextField;
	private var mainTab:TextField;
	private var tabGroup:TabGroupAbstract;
	
	private inline static var backgroundThemeColor:Int = 0xE9E9E9;
	private inline static var maxWidth:Float = 800;
	private var maxHeight:Float = 480;
	

	public function new()
	{
		super();
		var path = "test.xml";
		var xml:XMLReader = new XMLReader(path);
		tabModelsData = xml.getModels();
		
		this.graphics.beginFill(backgroundThemeColor);
		this.graphics.drawRect(0, 0, maxWidth, maxHeight);
		this.graphics.endFill();
		
		var factory:TabGroupFactory = new TabGroupFactory(tabModelsData.length);
		
		//tabGroup = factory.getInstance(TabGroupType.GRAY_MINIMIZED);
		tabGroup = factory.getInstance(TabGroupType.BLUE_MEDIUM);
		
		var tabArray:Array<Tab> = tabGroup.getTabs();
		this.mainTab = tabGroup.getMainTextField();
		this.addChild(mainTab);
		
		var i:Int = 1;
		var iteratorTabs = tabArray.iterator();
		var iteratorData = tabModelsData.iterator();
		while (iteratorTabs.hasNext() && iteratorData.hasNext())
		{
			var data = iteratorData.next();
			var textField:TextField = iteratorTabs.next().getTextField();
			textField.text = data.getTabName();
		
			textField.addEventListener(MouseEvent.CLICK, function(event:MouseEvent)
			{
				changeTextOfMainTab(data.getTabContent(), cast(event.target, TextField));
			});
			this.addChild(textField);
			++i;
		}
	}

	private function changeTextOfMainTab(text:String, field:TextField):Void
	{
		mainTab.replaceText(0, mainTab.text.length, text);
		changeColorForTabLater(field);
	}

	private function changeColorForTabLater(tab:TextField)
	{
		tab.backgroundColor = tabGroup.backgroundTabColor;
		if (previousTab != null)
		{
			if (previousTab != tab)
			{
				previousTab.backgroundColor = backgroundThemeColor;
			}
		}
		previousTab = tab;
	}
}
