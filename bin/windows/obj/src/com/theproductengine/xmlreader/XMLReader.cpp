#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_com_theproductengine_model_TabModel
#include <com/theproductengine/model/TabModel.h>
#endif
#ifndef INCLUDED_com_theproductengine_xmlreader_XMLReader
#include <com/theproductengine/xmlreader/XMLReader.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_exceptions_ArgumentException
#include <haxe/exceptions/ArgumentException.h>
#endif
#ifndef INCLUDED_haxe_exceptions_PosException
#include <haxe/exceptions/PosException.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filesystem_File
#include <openfl/filesystem/File.h>
#endif
#ifndef INCLUDED_openfl_net_FileReference
#include <openfl/net/FileReference.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7ea7528dda672833_16_new,"com.theproductengine.xmlreader.XMLReader","new",0x7a8647b7,"com.theproductengine.xmlreader.XMLReader.new","com/theproductengine/xmlreader/XMLReader.hx",16,0x2f84effa)
static const ::String _hx_array_data_ca54a045_3[] = {
	HX_("\n",0a,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_7ea7528dda672833_54_getModels,"com.theproductengine.xmlreader.XMLReader","getModels",0x04ceac77,"com.theproductengine.xmlreader.XMLReader.getModels","com/theproductengine/xmlreader/XMLReader.hx",54,0x2f84effa)
namespace com{
namespace theproductengine{
namespace xmlreader{

void XMLReader_obj::__construct(::String fileName){
            	HX_GC_STACKFRAME(&_hx_pos_7ea7528dda672833_16_new)
HXLINE(  18)		this->FOLDER_NAME = HX_("XMLInput",d3,92,b6,df);
HXLINE(  23)		this->MODELS = ::Array_obj< ::Dynamic>::__new();
HXLINE(  25)		::String docPath = ::openfl::filesystem::File_obj::get_documentsDirectory()->get_nativePath();
HXLINE(  26)		::String pathXMLInput = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,docPath)->init(1,this->FOLDER_NAME));
HXLINE(  27)		if (!(::sys::FileSystem_obj::exists(pathXMLInput))) {
HXLINE(  28)			::sys::FileSystem_obj::createDirectory(pathXMLInput);
            		}
HXLINE(  30)		::String filePath = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,pathXMLInput)->init(1,fileName));
HXLINE(  31)		if (!(::sys::FileSystem_obj::exists(filePath))) {
HXLINE(  32)			HX_STACK_DO_THROW( ::haxe::exceptions::ArgumentException_obj::__alloc( HX_CTX ,HX_("File ${fileName} not found",90,c0,f4,69),null(),null(),::hx::SourceInfo(HX_("src/com/theproductengine/xmlreader/XMLReader.hx",0f,f1,3a,f0),32,HX_("com.theproductengine.xmlreader.XMLReader",45,a0,54,ca),HX_("new",60,d0,53,00))));
            		}
HXLINE(  34)		 ::sys::io::FileInput fileInput = ::sys::io::File_obj::read(filePath,true);
HXLINE(  36)		 ::StringBuf st =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  37)		while(!(fileInput->eof())){
HXLINE(  39)			{
HXLINE(  39)				::String x = fileInput->readLine();
HXDLIN(  39)				if (::hx::IsNotNull( st->charBuf )) {
HXLINE(  39)					st->flush();
            				}
HXDLIN(  39)				if (::hx::IsNull( st->b )) {
HXLINE(  39)					st->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            				}
            				else {
HXLINE(  39)					::Array< ::String > st1 = st->b;
HXDLIN(  39)					st1->push(::Std_obj::string(x));
            				}
            			}
HXLINE(  40)			{
HXLINE(  40)				if (::hx::IsNotNull( st->charBuf )) {
HXLINE(  40)					st->flush();
            				}
HXDLIN(  40)				if (::hx::IsNull( st->b )) {
HXLINE(  40)					st->b = ::Array_obj< ::String >::fromData( _hx_array_data_ca54a045_3,1);
            				}
            				else {
HXLINE(  40)					st->b->push(HX_("\n",0a,00,00,00));
            				}
            			}
            		}
HXLINE(  42)		fileInput->close();
HXLINE(  44)		 ::Xml xml = ::Xml_obj::parse(st->toString());
HXLINE(  45)		bool iterator;
HXDLIN(  45)		if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE(  45)			iterator = (xml->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE(  45)			iterator = false;
            		}
HXDLIN(  45)		if (iterator) {
HXLINE(  45)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + ::_Xml::XmlType_Impl__obj::toString(xml->nodeType))));
            		}
HXDLIN(  45)		 ::Dynamic iterator1 = xml->children->__get(0).StaticCast<  ::Xml >()->elements();
HXLINE(  46)		while(( (bool)(iterator1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  47)			 ::Xml el = ( ( ::Xml)(iterator1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  48)			::Array< ::Dynamic> _hx_tmp = this->MODELS;
HXDLIN(  48)			::String _hx_tmp1 = el->get(HX_("name",4b,72,ff,48));
HXDLIN(  48)			bool _hx_tmp2;
HXDLIN(  48)			if ((el->nodeType != ::Xml_obj::Document)) {
HXLINE(  48)				_hx_tmp2 = (el->nodeType != ::Xml_obj::Element);
            			}
            			else {
HXLINE(  48)				_hx_tmp2 = false;
            			}
HXDLIN(  48)			if (_hx_tmp2) {
HXLINE(  48)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + ::_Xml::XmlType_Impl__obj::toString(el->nodeType))));
            			}
HXDLIN(  48)			 ::Xml _this = el->children->__get(0).StaticCast<  ::Xml >();
HXDLIN(  48)			bool _hx_tmp3;
HXDLIN(  48)			if ((_this->nodeType != ::Xml_obj::Document)) {
HXLINE(  48)				_hx_tmp3 = (_this->nodeType == ::Xml_obj::Element);
            			}
            			else {
HXLINE(  48)				_hx_tmp3 = true;
            			}
HXDLIN(  48)			if (_hx_tmp3) {
HXLINE(  48)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(_this->nodeType))));
            			}
HXDLIN(  48)			_hx_tmp->push( ::com::theproductengine::model::TabModel_obj::__alloc( HX_CTX ,_hx_tmp1,_this->nodeValue));
            		}
            	}

Dynamic XMLReader_obj::__CreateEmpty() { return new XMLReader_obj; }

void *XMLReader_obj::_hx_vtable = 0;

Dynamic XMLReader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< XMLReader_obj > _hx_result = new XMLReader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool XMLReader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2054e9bd;
}

::Array< ::Dynamic> XMLReader_obj::getModels(){
            	HX_STACKFRAME(&_hx_pos_7ea7528dda672833_54_getModels)
HXDLIN(  54)		return this->MODELS;
            	}


HX_DEFINE_DYNAMIC_FUNC0(XMLReader_obj,getModels,return )


::hx::ObjectPtr< XMLReader_obj > XMLReader_obj::__new(::String fileName) {
	::hx::ObjectPtr< XMLReader_obj > __this = new XMLReader_obj();
	__this->__construct(fileName);
	return __this;
}

::hx::ObjectPtr< XMLReader_obj > XMLReader_obj::__alloc(::hx::Ctx *_hx_ctx,::String fileName) {
	XMLReader_obj *__this = (XMLReader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(XMLReader_obj), true, "com.theproductengine.xmlreader.XMLReader"));
	*(void **)__this = XMLReader_obj::_hx_vtable;
	__this->__construct(fileName);
	return __this;
}

XMLReader_obj::XMLReader_obj()
{
}

void XMLReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(XMLReader);
	HX_MARK_MEMBER_NAME(FOLDER_NAME,"FOLDER_NAME");
	HX_MARK_MEMBER_NAME(MODELS,"MODELS");
	HX_MARK_END_CLASS();
}

void XMLReader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(FOLDER_NAME,"FOLDER_NAME");
	HX_VISIT_MEMBER_NAME(MODELS,"MODELS");
}

::hx::Val XMLReader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"MODELS") ) { return ::hx::Val( MODELS ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getModels") ) { return ::hx::Val( getModels_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"FOLDER_NAME") ) { return ::hx::Val( FOLDER_NAME ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val XMLReader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"MODELS") ) { MODELS=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"FOLDER_NAME") ) { FOLDER_NAME=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void XMLReader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("FOLDER_NAME",bc,bc,3b,4a));
	outFields->push(HX_("MODELS",aa,bc,49,73));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo XMLReader_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(XMLReader_obj,FOLDER_NAME),HX_("FOLDER_NAME",bc,bc,3b,4a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(XMLReader_obj,MODELS),HX_("MODELS",aa,bc,49,73)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *XMLReader_obj_sStaticStorageInfo = 0;
#endif

static ::String XMLReader_obj_sMemberFields[] = {
	HX_("FOLDER_NAME",bc,bc,3b,4a),
	HX_("MODELS",aa,bc,49,73),
	HX_("getModels",e0,99,1d,3d),
	::String(null()) };

::hx::Class XMLReader_obj::__mClass;

void XMLReader_obj::__register()
{
	XMLReader_obj _hx_dummy;
	XMLReader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("com.theproductengine.xmlreader.XMLReader",45,a0,54,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(XMLReader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< XMLReader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = XMLReader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = XMLReader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace theproductengine
} // end namespace xmlreader
