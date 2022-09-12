package com.theproductengine;

import com.theproductengine.builder.TabGroup;
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
	private var previousTab:TextField;
	private var mainTab:TextField;

	private var clearence:Float = 15;
	private var backgroundTabColor:Int = 0xB1CDEB;
	private var backgroundThemeColor:Int = 0xE9E9E9;
	private var tabWidth:Float = 150;
	private var tabHeight:Float = 40;
	private var backgroundTab:Bool = true;
	private var borderTab:Bool = true;
	private var txtFrmt:TextFormat = new TextFormat();

	public function new()
	{
		super();
		var path = "test.xml";
		var xml:XMLReader = new XMLReader(path);
	}
		//
		//txtFrmt.align = TextFormatAlign.CENTER;
		//txtFrmt.size = 20;
		//
		//this.graphics.beginFill(backgroundThemeColor);
		//this.graphics.drawRect(0, 0, 800, 480);
		//this.graphics.endFill();
		//
		//
		//var example:Tab = Tab.builder()
					 //.setBackground(backgroundTab)
					 //.setBackgroundColor(backgroundThemeColor)
					 //.setHeight(tabHeight)
					 //.setWidth(tabWidth)
					 //.setX(clearence)
					 //.setY(clearence)
					 //.setTextFormat(txtFrmt)
					 //.setText("Tab1")
					 //.setBorder(borderTab)
					 //.build();
//
		//var tabGroup:TabGroup = new TabGroup(10, 10, 10, example, 8, 780, txtFrmt, backgroundTabColor);
		//var tabArray:Array<Tab> = tabGroup.getTabs();
		//this.mainTab = tabGroup.getMainTextField();
		//this.addChild(mainTab);
		//
		//var i:Int = 1;
		//var iterator = tabArray.iterator();
		//while (iterator.hasNext())
		//{
			//var v = iterator.next();
			//var textField:TextField = v.getTextField();
			//textField.text = "Tab" + i;
			//var st:StringBuf = new StringBuf();
			//st.add("Some text for \n tab");
			//st.add(i);
			//st.add(" \n ------------ \n -----asd--- \n asdasdasd \n kitty ipsum dolor");
			//
			//textField.addEventListener(MouseEvent.CLICK, function(event:MouseEvent)
			//{
				//changeTextOfMainTab(st.toString(), cast(event.target, TextField));
			//});
			//this.addChild(textField);
			//++i;
		//}
	//}
//
	//private function changeTextOfMainTab(text:String, field:TextField):Void
	//{
		//mainTab.replaceText(0, mainTab.text.length, text);
		//changeColorForTabLater(field);
	//}
//
	//private function changeColorForTabLater(tab:TextField)
	//{
		//tab.backgroundColor = backgroundTabColor;
		//if (previousTab != null)
		//{
			//previousTab.backgroundColor = backgroundThemeColor;
		//}
		//previousTab = tab;
	//}

}
