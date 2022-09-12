package com.theproductengine.model;

/**
 * ...
 * @author Nikko
 */
class TabModel 
{
	private var tabName:String;
	private var tabContent:String;

	public function new(tabName:String, tabContent:String) 
	{
		this.tabName = tabName;
		this.tabContent = tabContent;
	}
	
	public function getTabName():String
	{
		return this.tabName;
	}
	
	public function getTabContent():String
	{
		return this.tabContent;
	}
}