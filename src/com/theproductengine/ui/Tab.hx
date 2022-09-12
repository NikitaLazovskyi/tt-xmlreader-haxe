package com.theproductengine.ui;
import com.theproductengine.builder.TabBuilder;
import com.theproductengine.interfaces.Cloneable;
import openfl.text.TextField;

/**
 * ...
 * @author Nikko
 */
class Tab implements Cloneable<Tab>
{
	public var textfield:TextField;
	
	public static function fromTextField(textField:TextField):Tab
	{
		var tab = new Tab();
		tab.textfield.border = textField.border;
		tab.textfield.x = textField.x;
		tab.textfield.y = textField.y;
		tab.textfield.width = textField.width;
		tab.textfield.height = textField.height;
		tab.textfield.text = textField.text;
		tab.textfield.setTextFormat(textField.getTextFormat());
		tab.textfield.background = textField.background;
		tab.textfield.backgroundColor = textField.backgroundColor;
		return tab;
	}
	
	public function new()
	{
		textfield = new TextField();
	}
	
	public function getTextField():TextField
	{
		return this.textfield;
	}
	
	public static function builder():TabBuilder
	{
		return new TabBuilder();
	}
	
	public function clone():Tab
	{
		var clonedTextfield:TextField = new TextField();
		clonedTextfield.border = this.textfield.border;
		clonedTextfield.x = this.textfield.x;
		clonedTextfield.y = this.textfield.y;
		clonedTextfield.width = this.textfield.width;
		clonedTextfield.height = this.textfield.height;
		clonedTextfield.text = this.textfield.text;
		clonedTextfield.setTextFormat(this.textfield.getTextFormat());
		clonedTextfield.background = this.textfield.background;
		clonedTextfield.backgroundColor = this.textfield.backgroundColor;
		return Tab.fromTextField(textfield);
	}

}