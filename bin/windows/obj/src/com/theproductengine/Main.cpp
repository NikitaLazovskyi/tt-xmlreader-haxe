#include <hxcpp.h>

#ifndef INCLUDED_com_theproductengine_Main
#include <com/theproductengine/Main.h>
#endif
#ifndef INCLUDED_com_theproductengine_builder_TabBuilder
#include <com/theproductengine/builder/TabBuilder.h>
#endif
#ifndef INCLUDED_com_theproductengine_factory_TabGroupAbstract
#include <com/theproductengine/factory/TabGroupAbstract.h>
#endif
#ifndef INCLUDED_com_theproductengine_interfaces_Cloneable
#include <com/theproductengine/interfaces/Cloneable.h>
#endif
#ifndef INCLUDED_com_theproductengine_model_TabGroup
#include <com/theproductengine/model/TabGroup.h>
#endif
#ifndef INCLUDED_com_theproductengine_model_TabModel
#include <com/theproductengine/model/TabModel.h>
#endif
#ifndef INCLUDED_com_theproductengine_ui_Tab
#include <com/theproductengine/ui/Tab.h>
#endif
#ifndef INCLUDED_com_theproductengine_xmlreader_XMLReader
#include <com/theproductengine/xmlreader/XMLReader.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1c628ec70cc67a56_21_new,"com.theproductengine.Main","new",0x0e6a8a6c,"com.theproductengine.Main.new","com/theproductengine/Main.hx",21,0x860553a4)
HX_DEFINE_STACK_FRAME(_hx_pos_1c628ec70cc67a56_83_new,"com.theproductengine.Main","new",0x0e6a8a6c,"com.theproductengine.Main.new","com/theproductengine/Main.hx",83,0x860553a4)
HX_LOCAL_STACK_FRAME(_hx_pos_1c628ec70cc67a56_91_changeTextOfMainTab,"com.theproductengine.Main","changeTextOfMainTab",0x0e57eb54,"com.theproductengine.Main.changeTextOfMainTab","com/theproductengine/Main.hx",91,0x860553a4)
HX_LOCAL_STACK_FRAME(_hx_pos_1c628ec70cc67a56_97_changeColorForTabLater,"com.theproductengine.Main","changeColorForTabLater",0x0a462281,"com.theproductengine.Main.changeColorForTabLater","com/theproductengine/Main.hx",97,0x860553a4)
namespace com{
namespace theproductengine{

void Main_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_1c628ec70cc67a56_21_new)
HXLINE(  37)		this->txtFrmt =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  36)		this->borderTab = true;
HXLINE(  35)		this->backgroundTab = true;
HXLINE(  34)		this->maxHeight = ((Float)480);
HXLINE(  33)		this->maxWidth = ((Float)800);
HXLINE(  32)		this->tabHeight = ((Float)40);
HXLINE(  31)		this->tabWidth = ((Float)150);
HXLINE(  30)		this->offsetY = ((Float)10);
HXLINE(  29)		this->offsetX = ((Float)10);
HXLINE(  28)		this->backgroundThemeColor = 15329769;
HXLINE(  27)		this->backgroundTabColor = 11652587;
HXLINE(  26)		this->clearence = ((Float)10);
HXLINE(  42)		 ::com::theproductengine::Main _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  43)		super::__construct();
HXLINE(  44)		::String path = HX_("test.xml",bb,97,1c,37);
HXLINE(  45)		 ::com::theproductengine::xmlreader::XMLReader xml =  ::com::theproductengine::xmlreader::XMLReader_obj::__alloc( HX_CTX ,path);
HXLINE(  46)		this->tabModelsData = xml->getModels();
HXLINE(  48)		this->txtFrmt->align = 0;
HXLINE(  49)		this->txtFrmt->size = 20;
HXLINE(  51)		this->get_graphics()->beginFill(this->backgroundThemeColor,null());
HXLINE(  52)		this->get_graphics()->drawRect(( (Float)(0) ),( (Float)(0) ),this->maxWidth,this->maxHeight);
HXLINE(  53)		this->get_graphics()->endFill();
HXLINE(  55)		 ::com::theproductengine::ui::Tab example = ::com::theproductengine::ui::Tab_obj::builder()->setBackground(this->backgroundTab)->setBackgroundColor(this->backgroundThemeColor)->setHeight(this->tabHeight)->setWidth(this->tabWidth)->setX(this->offsetX)->setY(this->offsetY)->setTextFormat(this->txtFrmt)->setText(HX_("Tab1",5c,dc,cf,37))->setBorder(this->borderTab)->build();
HXLINE(  67)		 ::com::theproductengine::model::TabGroup tabGroup =  ::com::theproductengine::model::TabGroup_obj::__alloc( HX_CTX ,this->offsetX,this->offsetY,this->clearence,example,this->tabModelsData->length,(this->maxWidth - (( (Float)(2) ) * this->clearence)),this->txtFrmt,this->backgroundTabColor);
HXLINE(  68)		::Array< ::Dynamic> tabArray = tabGroup->getTabs();
HXLINE(  69)		this->mainTab = tabGroup->getMainTextField();
HXLINE(  70)		this->addChild(this->mainTab);
HXLINE(  72)		int i = 1;
HXLINE(  73)		int iteratorTabs_current = 0;
HXDLIN(  73)		::Array< ::Dynamic> iteratorTabs_array = tabArray;
HXLINE(  74)		int iteratorData_current = 0;
HXDLIN(  74)		::Array< ::Dynamic> iteratorData_array = this->tabModelsData;
HXLINE(  75)		while(true){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::com::theproductengine::Main,_gthis, ::com::theproductengine::model::TabModel,data) HXARGC(1)
            			void _hx_run( ::openfl::events::MouseEvent event){
            				HX_GC_STACKFRAME(&_hx_pos_1c628ec70cc67a56_83_new)
HXLINE(  83)				 ::com::theproductengine::Main _gthis1 = _gthis;
HXDLIN(  83)				::String _hx_tmp = data->getTabContent();
HXDLIN(  83)				_gthis1->changeTextOfMainTab(_hx_tmp,::hx::TCast<  ::openfl::text::TextField >::cast(event->target));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  75)			bool _hx_tmp;
HXDLIN(  75)			if ((iteratorTabs_current < iteratorTabs_array->length)) {
HXLINE(  75)				_hx_tmp = (iteratorData_current < iteratorData_array->length);
            			}
            			else {
HXLINE(  75)				_hx_tmp = false;
            			}
HXDLIN(  75)			if (!(_hx_tmp)) {
HXLINE(  75)				goto _hx_goto_0;
            			}
HXLINE(  77)			iteratorData_current = (iteratorData_current + 1);
HXDLIN(  77)			 ::com::theproductengine::model::TabModel data = iteratorData_array->__get((iteratorData_current - 1)).StaticCast<  ::com::theproductengine::model::TabModel >();
HXLINE(  78)			iteratorTabs_current = (iteratorTabs_current + 1);
HXDLIN(  78)			 ::openfl::text::TextField textField = iteratorTabs_array->__get((iteratorTabs_current - 1)).StaticCast<  ::com::theproductengine::ui::Tab >()->getTextField();
HXLINE(  79)			textField->set_text(data->getTabName());
HXLINE(  81)			textField->addEventListener(HX_("click",48,7c,5e,48), ::Dynamic(new _hx_Closure_0(_gthis,data)),null(),null(),null());
HXLINE(  85)			this->addChild(textField);
HXLINE(  86)			i = (i + 1);
            		}
            		_hx_goto_0:;
            	}

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07c3d5b2) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07c3d5b2;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Main_obj::changeTextOfMainTab(::String text, ::openfl::text::TextField field){
            	HX_STACKFRAME(&_hx_pos_1c628ec70cc67a56_91_changeTextOfMainTab)
HXLINE(  92)		 ::openfl::text::TextField _hx_tmp = this->mainTab;
HXDLIN(  92)		_hx_tmp->replaceText(0,this->mainTab->get_text().length,text);
HXLINE(  93)		this->changeColorForTabLater(field);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,changeTextOfMainTab,(void))

void Main_obj::changeColorForTabLater( ::openfl::text::TextField tab){
            	HX_STACKFRAME(&_hx_pos_1c628ec70cc67a56_97_changeColorForTabLater)
HXLINE(  98)		tab->set_backgroundColor(this->backgroundTabColor);
HXLINE(  99)		if (::hx::IsNotNull( this->previousTab )) {
HXLINE( 101)			if (::hx::IsInstanceNotEq( this->previousTab,tab )) {
HXLINE( 103)				this->previousTab->set_backgroundColor(this->backgroundThemeColor);
            			}
            		}
HXLINE( 106)		this->previousTab = tab;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,changeColorForTabLater,(void))


::hx::ObjectPtr< Main_obj > Main_obj::__new() {
	::hx::ObjectPtr< Main_obj > __this = new Main_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Main_obj > Main_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Main_obj *__this = (Main_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), true, "com.theproductengine.Main"));
	*(void **)__this = Main_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(previousTab,"previousTab");
	HX_MARK_MEMBER_NAME(mainTab,"mainTab");
	HX_MARK_MEMBER_NAME(clearence,"clearence");
	HX_MARK_MEMBER_NAME(backgroundTabColor,"backgroundTabColor");
	HX_MARK_MEMBER_NAME(backgroundThemeColor,"backgroundThemeColor");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(tabWidth,"tabWidth");
	HX_MARK_MEMBER_NAME(tabHeight,"tabHeight");
	HX_MARK_MEMBER_NAME(maxWidth,"maxWidth");
	HX_MARK_MEMBER_NAME(maxHeight,"maxHeight");
	HX_MARK_MEMBER_NAME(backgroundTab,"backgroundTab");
	HX_MARK_MEMBER_NAME(borderTab,"borderTab");
	HX_MARK_MEMBER_NAME(txtFrmt,"txtFrmt");
	HX_MARK_MEMBER_NAME(tabModelsData,"tabModelsData");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(previousTab,"previousTab");
	HX_VISIT_MEMBER_NAME(mainTab,"mainTab");
	HX_VISIT_MEMBER_NAME(clearence,"clearence");
	HX_VISIT_MEMBER_NAME(backgroundTabColor,"backgroundTabColor");
	HX_VISIT_MEMBER_NAME(backgroundThemeColor,"backgroundThemeColor");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(tabWidth,"tabWidth");
	HX_VISIT_MEMBER_NAME(tabHeight,"tabHeight");
	HX_VISIT_MEMBER_NAME(maxWidth,"maxWidth");
	HX_VISIT_MEMBER_NAME(maxHeight,"maxHeight");
	HX_VISIT_MEMBER_NAME(backgroundTab,"backgroundTab");
	HX_VISIT_MEMBER_NAME(borderTab,"borderTab");
	HX_VISIT_MEMBER_NAME(txtFrmt,"txtFrmt");
	HX_VISIT_MEMBER_NAME(tabModelsData,"tabModelsData");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Main_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"mainTab") ) { return ::hx::Val( mainTab ); }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		if (HX_FIELD_EQ(inName,"txtFrmt") ) { return ::hx::Val( txtFrmt ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabWidth") ) { return ::hx::Val( tabWidth ); }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { return ::hx::Val( maxWidth ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clearence") ) { return ::hx::Val( clearence ); }
		if (HX_FIELD_EQ(inName,"tabHeight") ) { return ::hx::Val( tabHeight ); }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { return ::hx::Val( maxHeight ); }
		if (HX_FIELD_EQ(inName,"borderTab") ) { return ::hx::Val( borderTab ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"previousTab") ) { return ::hx::Val( previousTab ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"backgroundTab") ) { return ::hx::Val( backgroundTab ); }
		if (HX_FIELD_EQ(inName,"tabModelsData") ) { return ::hx::Val( tabModelsData ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"backgroundTabColor") ) { return ::hx::Val( backgroundTabColor ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"changeTextOfMainTab") ) { return ::hx::Val( changeTextOfMainTab_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"backgroundThemeColor") ) { return ::hx::Val( backgroundThemeColor ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"changeColorForTabLater") ) { return ::hx::Val( changeColorForTabLater_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Main_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"mainTab") ) { mainTab=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"txtFrmt") ) { txtFrmt=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabWidth") ) { tabWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { maxWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clearence") ) { clearence=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabHeight") ) { tabHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { maxHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderTab") ) { borderTab=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"previousTab") ) { previousTab=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"backgroundTab") ) { backgroundTab=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabModelsData") ) { tabModelsData=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"backgroundTabColor") ) { backgroundTabColor=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"backgroundThemeColor") ) { backgroundThemeColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("previousTab",5e,92,07,b3));
	outFields->push(HX_("mainTab",9c,03,4a,3b));
	outFields->push(HX_("clearence",58,17,fe,cb));
	outFields->push(HX_("backgroundTabColor",dc,e0,8a,59));
	outFields->push(HX_("backgroundThemeColor",28,f0,5c,a2));
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	outFields->push(HX_("tabWidth",71,37,07,39));
	outFields->push(HX_("tabHeight",1c,c4,98,63));
	outFields->push(HX_("maxWidth",c2,08,80,74));
	outFields->push(HX_("maxHeight",ab,19,d7,31));
	outFields->push(HX_("backgroundTab",07,27,f1,91));
	outFields->push(HX_("borderTab",c9,a0,9b,80));
	outFields->push(HX_("txtFrmt",43,36,a4,cb));
	outFields->push(HX_("tabModelsData",a9,aa,81,79));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Main_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(Main_obj,previousTab),HX_("previousTab",5e,92,07,b3)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(Main_obj,mainTab),HX_("mainTab",9c,03,4a,3b)},
	{::hx::fsFloat,(int)offsetof(Main_obj,clearence),HX_("clearence",58,17,fe,cb)},
	{::hx::fsInt,(int)offsetof(Main_obj,backgroundTabColor),HX_("backgroundTabColor",dc,e0,8a,59)},
	{::hx::fsInt,(int)offsetof(Main_obj,backgroundThemeColor),HX_("backgroundThemeColor",28,f0,5c,a2)},
	{::hx::fsFloat,(int)offsetof(Main_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(Main_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(Main_obj,tabWidth),HX_("tabWidth",71,37,07,39)},
	{::hx::fsFloat,(int)offsetof(Main_obj,tabHeight),HX_("tabHeight",1c,c4,98,63)},
	{::hx::fsFloat,(int)offsetof(Main_obj,maxWidth),HX_("maxWidth",c2,08,80,74)},
	{::hx::fsFloat,(int)offsetof(Main_obj,maxHeight),HX_("maxHeight",ab,19,d7,31)},
	{::hx::fsBool,(int)offsetof(Main_obj,backgroundTab),HX_("backgroundTab",07,27,f1,91)},
	{::hx::fsBool,(int)offsetof(Main_obj,borderTab),HX_("borderTab",c9,a0,9b,80)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(Main_obj,txtFrmt),HX_("txtFrmt",43,36,a4,cb)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Main_obj,tabModelsData),HX_("tabModelsData",a9,aa,81,79)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Main_obj_sStaticStorageInfo = 0;
#endif

static ::String Main_obj_sMemberFields[] = {
	HX_("previousTab",5e,92,07,b3),
	HX_("mainTab",9c,03,4a,3b),
	HX_("clearence",58,17,fe,cb),
	HX_("backgroundTabColor",dc,e0,8a,59),
	HX_("backgroundThemeColor",28,f0,5c,a2),
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("tabWidth",71,37,07,39),
	HX_("tabHeight",1c,c4,98,63),
	HX_("maxWidth",c2,08,80,74),
	HX_("maxHeight",ab,19,d7,31),
	HX_("backgroundTab",07,27,f1,91),
	HX_("borderTab",c9,a0,9b,80),
	HX_("txtFrmt",43,36,a4,cb),
	HX_("tabModelsData",a9,aa,81,79),
	HX_("changeTextOfMainTab",48,59,3f,aa),
	HX_("changeColorForTabLater",0d,e5,48,46),
	::String(null()) };

::hx::Class Main_obj::__mClass;

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("com.theproductengine.Main",7a,24,ea,86);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Main_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace theproductengine
