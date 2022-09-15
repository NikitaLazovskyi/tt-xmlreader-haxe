package com.theproductengine.factory;
import com.theproductengine.model.TabModel;
import com.theproductengine.model.tabgroup.TabGroupAbstract;
import com.theproductengine.model.tabgroup.impl.BlueMediumTabGroup;
import com.theproductengine.model.tabgroup.impl.GreyMinimizedTabGroup;
import com.theproductengine.scrollbar.ScrollBarV;
import com.theproductengine.ui.Tab;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;

/**
 * ...
 * @author Nikko
 */
class TabGroupFactory 
{
	private var clearence:Float = 10;
	private var backgroundTabColor:Int = 0xB1CDEB;
	private var backgroundThemeColor:Int = 0xE9E9E9;
	private var offsetX:Float = 20;
	private var offsetY:Float = 20;
	private var tabWidth:Float = 150;
	private var tabHeight:Float = 40;
	private var maxWidth:Float = 750;
	private var maxHeight:Float = 450;
	private var backgroundTab:Bool = true;
	private var borderTab:Bool = true;
	private var txtFrmt:TextFormat = new TextFormat();
	
	private var tabModelsData:Array<TabModel>;
	
	public function new(tabModelsData:Array<TabModel>) 
	{
		this.tabModelsData = tabModelsData;
	}
	
	public function getInstance(type:TabGroupType):TabGroupAbstract
	{
		
		txtFrmt.align = TextFormatAlign.CENTER;
		txtFrmt.size = 20;
		
		var example:Tab = Tab.builder()
					 .setBackground(backgroundTab)
					 .setBackgroundColor(backgroundThemeColor)
					 .setHeight(tabHeight)
					 .setWidth(tabWidth)
					 .setX(offsetX)
					 .setY(offsetY)
					 .setTextFormat(txtFrmt)
					 .setText("Tab1")
					 .setBorder(borderTab)
					 .build();
		
		switch (type) 
		{
			case TabGroupType.BLUE_MEDIUM:
				return new BlueMediumTabGroup(offsetX, offsetY, clearence-5, example, tabModelsData, maxWidth-(2*clearence));
			case TabGroupType.GRAY_MINIMIZED:
				return new GreyMinimizedTabGroup(offsetX, offsetY, clearence-5, example, tabModelsData, maxWidth-(2*clearence));
			default:
				return null;
		}
	}
	
	
	
}