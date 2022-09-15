#include <hxcpp.h>

#ifndef INCLUDED_com_theproductengine_Main
#include <com/theproductengine/Main.h>
#endif
#ifndef INCLUDED_com_theproductengine_factory_TabGroupFactory
#include <com/theproductengine/factory/TabGroupFactory.h>
#endif
#ifndef INCLUDED_com_theproductengine_factory_TabGroupType
#include <com/theproductengine/factory/TabGroupType.h>
#endif
#ifndef INCLUDED_com_theproductengine_model_TabModel
#include <com/theproductengine/model/TabModel.h>
#endif
#ifndef INCLUDED_com_theproductengine_model_tabgroup_TabGroupAbstract
#include <com/theproductengine/model/tabgroup/TabGroupAbstract.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1c628ec70cc67a56_22_new,"com.theproductengine.Main","new",0x0e6a8a6c,"com.theproductengine.Main.new","com/theproductengine/Main.hx",22,0x860553a4)
HX_LOCAL_STACK_FRAME(_hx_pos_1c628ec70cc67a56_17_boot,"com.theproductengine.Main","boot",0x86e794a6,"com.theproductengine.Main.boot","com/theproductengine/Main.hx",17,0x860553a4)
HX_LOCAL_STACK_FRAME(_hx_pos_1c628ec70cc67a56_18_boot,"com.theproductengine.Main","boot",0x86e794a6,"com.theproductengine.Main.boot","com/theproductengine/Main.hx",18,0x860553a4)
HX_LOCAL_STACK_FRAME(_hx_pos_1c628ec70cc67a56_19_boot,"com.theproductengine.Main","boot",0x86e794a6,"com.theproductengine.Main.boot","com/theproductengine/Main.hx",19,0x860553a4)
namespace com{
namespace theproductengine{

void Main_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_1c628ec70cc67a56_22_new)
HXLINE(  23)		super::__construct();
HXLINE(  24)		::String path = HX_("test.xml",bb,97,1c,37);
HXLINE(  25)		::Array< ::Dynamic> tabModelsData =  ::com::theproductengine::xmlreader::XMLReader_obj::__alloc( HX_CTX ,path)->getModels();
HXLINE(  27)		 ::openfl::display::Sprite sprite =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  28)		this->addChild(sprite);
HXLINE(  30)		sprite->get_graphics()->beginFill(15329769,null());
HXLINE(  31)		sprite->get_graphics()->drawRect(( (Float)(0) ),( (Float)(0) ),((Float)800),((Float)480));
HXLINE(  32)		sprite->get_graphics()->endFill();
HXLINE(  34)		 ::com::theproductengine::factory::TabGroupFactory factory =  ::com::theproductengine::factory::TabGroupFactory_obj::__alloc( HX_CTX ,tabModelsData);
HXLINE(  37)		 ::com::theproductengine::model::tabgroup::TabGroupAbstract tabGroup = factory->getInstance(::com::theproductengine::factory::TabGroupType_obj::BLUE_MEDIUM_dyn());
HXLINE(  39)		sprite->addChild(tabGroup->getMainSprite());
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

int Main_obj::backgroundThemeColor;

Float Main_obj::maxWidth;

Float Main_obj::maxHeight;


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

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Main_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Main_obj::backgroundThemeColor,HX_("backgroundThemeColor",28,f0,5c,a2)},
	{::hx::fsFloat,(void *) &Main_obj::maxWidth,HX_("maxWidth",c2,08,80,74)},
	{::hx::fsFloat,(void *) &Main_obj::maxHeight,HX_("maxHeight",ab,19,d7,31)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::backgroundThemeColor,"backgroundThemeColor");
	HX_MARK_MEMBER_NAME(Main_obj::maxWidth,"maxWidth");
	HX_MARK_MEMBER_NAME(Main_obj::maxHeight,"maxHeight");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::backgroundThemeColor,"backgroundThemeColor");
	HX_VISIT_MEMBER_NAME(Main_obj::maxWidth,"maxWidth");
	HX_VISIT_MEMBER_NAME(Main_obj::maxHeight,"maxHeight");
};

#endif

::hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("backgroundThemeColor",28,f0,5c,a2),
	HX_("maxWidth",c2,08,80,74),
	HX_("maxHeight",ab,19,d7,31),
	::String(null())
};

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
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Main_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1c628ec70cc67a56_17_boot)
HXDLIN(  17)		backgroundThemeColor = 15329769;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1c628ec70cc67a56_18_boot)
HXDLIN(  18)		maxWidth = ((Float)800);
            	}
{
            	HX_STACKFRAME(&_hx_pos_1c628ec70cc67a56_19_boot)
HXDLIN(  19)		maxHeight = ((Float)480);
            	}
}

} // end namespace com
} // end namespace theproductengine
