package com.theproductengine.builder;
import com.theproductengine.ui.Tab;
import openfl.text.TextField;
import openfl.text.TextFormat;

/**
 * Class-implementation of Builder Pattern to acheive 
 * @author Nikko
 */
class TabBuilder
	{
		private var x:Float;
		private var y:Float;
		private var width:Float;
		private var height:Float;
		private var textFormat:TextFormat;
		private var text:String;
		private var background:Bool;
		private var backgroundColor:Int;
		private var border:Bool;
		
		public function new()
		{
			
		}
		
		public function setX(x:Float):TabBuilder
		{
			this.x = x;
			return this;
		}
		
		public function setY(y:Float):TabBuilder
		{
			this.y = y;
			return this;
		}
		
		public function setWidth(width:Float):TabBuilder
		{
			this.width = width;
			return this;
		}
		
		public function setHeight(height:Float):TabBuilder
		{
			this.height = height;
			return this;
		}
		
		public function setTextFormat(textFormat:TextFormat):TabBuilder
		{
			this.textFormat = textFormat;
			return this;
		}
		
		public function setText(text:String):TabBuilder
		{
			this.text = text;
			return this;
		}
		
		public function setBackground(background:Bool):TabBuilder
		{
			this.background = background;
			return this;
		}
		
		public function setBackgroundColor(backgroundColor:Int):TabBuilder
		{
			this.backgroundColor = backgroundColor;
			return this;
		}
		
		public function setBorder(border:Bool):TabBuilder
		{
			this.border = border;
			return this;
		}
		
		public function build():Tab
		{
			var textfield:TextField = new TextField();
			textfield.border = this.border;
			textfield.x = this.x;
			textfield.y = this.y;
			textfield.width = this.width;
			textfield.height = this.height;
			textfield.text = this.text;
			textfield.setTextFormat(this.textFormat);
			textfield.background = this.background;
			textfield.backgroundColor = this.backgroundColor;
		
			var tab:Tab = Tab.fromTextField(textfield);
			return tab;
		}
	}