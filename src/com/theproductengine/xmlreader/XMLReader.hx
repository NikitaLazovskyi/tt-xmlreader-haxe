package com.theproductengine.xmlreader;

import com.theproductengine.model.TabModel;
import haxe.exceptions.ArgumentException;
import haxe.io.Path;
import sys.FileSystem;
import sys.io.FileInput;
import sys.io.File;


/**
 * Working with directory User/Documents/XMLInput
 * If this directory doesn't exist then new one will be created
 * Locate in this directory any xml file.
 * @author Nikko
 */
class XMLReader 
{
	private var FOLDER_NAME = "XMLInput";
	private var MODELS:Array<TabModel>;
	
	public function new(fileName:String) 
	{
		MODELS = new Array();
		
		var docPath:String = openfl.filesystem.File.documentsDirectory.nativePath;
		var pathXMLInput:String = Path.join([docPath, FOLDER_NAME]);
		if (!FileSystem.exists(pathXMLInput)){
			FileSystem.createDirectory(pathXMLInput);
		}	
		var filePath:String = Path.join([pathXMLInput, fileName]);
		if (!FileSystem.exists(filePath)){
			throw new ArgumentException('File $fileName not found');
		}
		var fileInput:FileInput = File.read(filePath, true);
	
		var st:StringBuf = new StringBuf();
		while (!fileInput.eof()) 
		{
			st.add(fileInput.readLine());
			st.add("\n");
		}
		fileInput.close();
		
		var xml = Xml.parse(st.toString());
		var iterator:Iterator<Xml> = xml.firstChild().elements();
		while (iterator.hasNext()){
			var el:Xml = iterator.next();
			MODELS.push(new TabModel(el.get("name"), el.firstChild().nodeValue));
		}
	}
	
	public function getModels():Array<TabModel>
	{
		return this.MODELS;
	}
}