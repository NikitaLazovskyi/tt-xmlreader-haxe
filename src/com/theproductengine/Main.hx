package com.theproductengine;

import com.theproductengine.model.tabgroup.TabGroupAbstract;
import com.theproductengine.factory.TabGroupType;
import com.theproductengine.factory.TabGroupFactory;
import com.theproductengine.xmlreader.XMLReader;
import openfl.display.Sprite;
import com.theproductengine.model.TabModel;
import openfl.events.MouseEvent;

/**
 * ...
 * @author Nikko
 */
class Main extends Sprite
{
	private inline static var backgroundThemeColor:Int = 0xE9E9E9;
	private inline static var maxWidth:Float = 800;
	private inline static var maxHeight:Float = 480;

	public function new()
	{
		super();
		var path = "test.xml";
		var tabModelsData:Array<TabModel> = new XMLReader(path).getModels();

		var sprite:Sprite = new Sprite();
		this.addChild(sprite);

		sprite.graphics.beginFill(backgroundThemeColor);
		sprite.graphics.drawRect(0, 0, maxWidth, maxHeight);
		sprite.graphics.endFill();

		var factory:TabGroupFactory = new TabGroupFactory(tabModelsData);

		//var tabGroup:TabGroupAbstract = factory.getInstance(TabGroupType.GRAY_MINIMIZED);
		var tabGroup:TabGroupAbstract = factory.getInstance(TabGroupType.BLUE_MEDIUM);

		sprite.addChild(tabGroup.getMainSprite());
	}
}
