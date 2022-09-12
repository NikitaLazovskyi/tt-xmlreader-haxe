#include <hxcpp.h>

#ifndef INCLUDED_com_theproductengine_factory_TabGroupAbstract
#include <com/theproductengine/factory/TabGroupAbstract.h>
#endif
#ifndef INCLUDED_com_theproductengine_interfaces_Cloneable
#include <com/theproductengine/interfaces/Cloneable.h>
#endif
#ifndef INCLUDED_com_theproductengine_model_TabGroup
#include <com/theproductengine/model/TabGroup.h>
#endif
#ifndef INCLUDED_com_theproductengine_ui_Tab
#include <com/theproductengine/ui/Tab.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9be201b4acc7a3ff_14_new,"com.theproductengine.model.TabGroup","new",0xd5baaa82,"com.theproductengine.model.TabGroup.new","com/theproductengine/model/TabGroup.hx",14,0x75325ded)
namespace com{
namespace theproductengine{
namespace model{

void TabGroup_obj::__construct(Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,int amount,Float maxWidth, ::openfl::text::TextFormat txtFrmt,int backgroundTabColor){
            	HX_GC_STACKFRAME(&_hx_pos_9be201b4acc7a3ff_14_new)
HXLINE(  15)		this->amount = amount;
HXLINE(  16)		this->x = x;
HXLINE(  17)		this->y = y;
HXLINE(  18)		this->clearence = clearence;
HXLINE(  19)		this->maxWidth = maxWidth;
HXLINE(  20)		this->example = tab;
HXLINE(  21)		this->tabs = ::Array_obj< ::Dynamic>::__new();
HXLINE(  22)		this->populateArray();
HXLINE(  24)		this->mainTab =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  25)		this->mainTab->set_x(x);
HXLINE(  26)		 ::openfl::text::TextField _hx_tmp = this->mainTab;
HXDLIN(  26)		_hx_tmp->set_y((y + tab->getTextField()->get_height()));
HXLINE(  27)		this->mainTab->set_text(HX_("Some text",39,e5,9f,01));
HXLINE(  28)		this->mainTab->setTextFormat(txtFrmt,null(),null());
HXLINE(  29)		this->mainTab->set_border(true);
HXLINE(  30)		this->mainTab->set_height((maxWidth / ( (Float)(2) )));
HXLINE(  31)		this->mainTab->set_width(maxWidth);
HXLINE(  32)		this->mainTab->set_background(true);
HXLINE(  33)		this->mainTab->set_backgroundColor(backgroundTabColor);
            	}

Dynamic TabGroup_obj::__CreateEmpty() { return new TabGroup_obj; }

void *TabGroup_obj::_hx_vtable = 0;

Dynamic TabGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabGroup_obj > _hx_result = new TabGroup_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool TabGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0a8edfba) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0a8edfba;
	} else {
		return inClassId==(int)0x7436e279;
	}
}


::hx::ObjectPtr< TabGroup_obj > TabGroup_obj::__new(Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,int amount,Float maxWidth, ::openfl::text::TextFormat txtFrmt,int backgroundTabColor) {
	::hx::ObjectPtr< TabGroup_obj > __this = new TabGroup_obj();
	__this->__construct(x,y,clearence,tab,amount,maxWidth,txtFrmt,backgroundTabColor);
	return __this;
}

::hx::ObjectPtr< TabGroup_obj > TabGroup_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,int amount,Float maxWidth, ::openfl::text::TextFormat txtFrmt,int backgroundTabColor) {
	TabGroup_obj *__this = (TabGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabGroup_obj), true, "com.theproductengine.model.TabGroup"));
	*(void **)__this = TabGroup_obj::_hx_vtable;
	__this->__construct(x,y,clearence,tab,amount,maxWidth,txtFrmt,backgroundTabColor);
	return __this;
}

TabGroup_obj::TabGroup_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TabGroup_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TabGroup_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TabGroup_obj::__mClass;

void TabGroup_obj::__register()
{
	TabGroup_obj _hx_dummy;
	TabGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("com.theproductengine.model.TabGroup",90,01,37,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TabGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace theproductengine
} // end namespace model
