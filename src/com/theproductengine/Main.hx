package com.theproductengine;

import com.theproductengine.builder.TabBuilder;
import com.theproductengine.factory.TabGroupFactory;
import com.theproductengine.factory.TabGroupType;
import com.theproductengine.model.tabgroup.TabGroupAbstract;
import com.theproductengine.model.tabgroup.impl.BlueMediumTabGroup;
import com.theproductengine.model.tabgroup.impl.GreyMinimizedTabGroup;
import com.theproductengine.model.TabModel;
import com.theproductengine.scrollbar.ScrollBar;
import com.theproductengine.ui.Tab;
import com.theproductengine.xmlreader.XMLReader;
import haxe.io.Path;
import haxe.xml.Check.Rule;
import openfl.display.BlendMode;
import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.geom.Rectangle;
import openfl.text.TextField;
import openfl.events.MouseEvent;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import ru.stablex.ui.widgets.Scroll;

/**
 * ...
 * @author Nikko
 */
class Main extends Sprite
{
	private var offsetY:Float;
	private var yTopLimit:Float;
	private var yBottomLimit:Float;

	private var tabModelsData:Array<TabModel>;
	private var previousTab:TextField;
	private var mainTab:TextField;
	private var tabGroup:TabGroupAbstract;
	
	private inline static var backgroundThemeColor:Int = 0xE9E9E9;
	private inline static var maxWidth:Float = 800;
	private inline static var maxHeight:Float = 480;
	
	private var rectInnerBox:Sprite;
	private var rectOuter:Sprite;
	
	private var txtFld:TextField;
	

	public function new()
	{
		super();
		var path = "test.xml";
		tabModelsData = new XMLReader(path).getModels();
		
		var sprite:Sprite = new Sprite();
		this.addChild(sprite);
		
		
		sprite.graphics.beginFill(backgroundThemeColor);
		sprite.graphics.drawRect(0, 0, maxWidth, maxHeight);
		sprite.graphics.endFill();
		var mainSprite = new Sprite();
		
		var factory:TabGroupFactory = new TabGroupFactory(tabModelsData.length);
		
		//tabGroup = factory.getInstance(TabGroupType.GRAY_MINIMIZED);
		tabGroup = factory.getInstance(TabGroupType.BLUE_MEDIUM);
		
		sprite.addChild(mainSprite);			
		var tabArray:Array<Tab> = tabGroup.getTabs();
		this.mainTab = tabGroup.getMainTextField();
		sprite.addChild(mainTab);
		
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
			this.addChild(textField);
			++i;
		}
	}
	

	private function changeTextOfMainTab(text:String, field:TextField):Void{
		mainTab.replaceText(0, mainTab.text.length, text);
		changeColorForTabLater(field);
	}

	private function changeColorForTabLater(tab:TextField){
		tab.backgroundColor = tabGroup.backgroundTabColor;
		if (previousTab != null && previousTab != tab)
		{
			previousTab.backgroundColor = backgroundThemeColor;
		}
		previousTab = tab;
	}
}
