#include <hxcpp.h>

#ifndef INCLUDED_com_theproductengine_builder_TabBuilder
#include <com/theproductengine/builder/TabBuilder.h>
#endif
#ifndef INCLUDED_com_theproductengine_interfaces_Cloneable
#include <com/theproductengine/interfaces/Cloneable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9808d94f9cb58463_31_new,"com.theproductengine.ui.Tab","new",0xf855dc6e,"com.theproductengine.ui.Tab.new","com/theproductengine/ui/Tab.hx",31,0x5824b6a3)
HX_LOCAL_STACK_FRAME(_hx_pos_9808d94f9cb58463_36_getTextField,"com.theproductengine.ui.Tab","getTextField",0xa246c389,"com.theproductengine.ui.Tab.getTextField","com/theproductengine/ui/Tab.hx",36,0x5824b6a3)
HX_LOCAL_STACK_FRAME(_hx_pos_9808d94f9cb58463_45_clone,"com.theproductengine.ui.Tab","clone",0xce0abeeb,"com.theproductengine.ui.Tab.clone","com/theproductengine/ui/Tab.hx",45,0x5824b6a3)
HX_LOCAL_STACK_FRAME(_hx_pos_9808d94f9cb58463_15_fromTextField,"com.theproductengine.ui.Tab","fromTextField",0x551d4b91,"com.theproductengine.ui.Tab.fromTextField","com/theproductengine/ui/Tab.hx",15,0x5824b6a3)
HX_LOCAL_STACK_FRAME(_hx_pos_9808d94f9cb58463_41_builder,"com.theproductengine.ui.Tab","builder",0x6f4f0629,"com.theproductengine.ui.Tab.builder","com/theproductengine/ui/Tab.hx",41,0x5824b6a3)
namespace com{
namespace theproductengine{
namespace ui{

void Tab_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_9808d94f9cb58463_31_new)
HXDLIN(  31)		this->textfield =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
            	}

Dynamic Tab_obj::__CreateEmpty() { return new Tab_obj; }

void *Tab_obj::_hx_vtable = 0;

Dynamic Tab_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Tab_obj > _hx_result = new Tab_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Tab_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x22604c20;
}

static ::com::theproductengine::interfaces::Cloneable_obj _hx_com_theproductengine_ui_Tab__hx_com_theproductengine_interfaces_Cloneable= {
	(  ::Dynamic (::hx::Object::*)())&::com::theproductengine::ui::Tab_obj::clone_2aa2127b,
};

 ::Dynamic Tab_obj::clone_2aa2127b() {
			return clone();
}
void *Tab_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9ff5233c: return &_hx_com_theproductengine_ui_Tab__hx_com_theproductengine_interfaces_Cloneable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::openfl::text::TextField Tab_obj::getTextField(){
            	HX_STACKFRAME(&_hx_pos_9808d94f9cb58463_36_getTextField)
HXDLIN(  36)		return this->textfield;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tab_obj,getTextField,return )

 ::com::theproductengine::ui::Tab Tab_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_9808d94f9cb58463_45_clone)
HXLINE(  46)		 ::openfl::text::TextField clonedTextfield =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  47)		clonedTextfield->set_border(this->textfield->get_border());
HXLINE(  48)		clonedTextfield->set_x(this->textfield->get_x());
HXLINE(  49)		clonedTextfield->set_y(this->textfield->get_y());
HXLINE(  50)		clonedTextfield->set_width(this->textfield->get_width());
HXLINE(  51)		clonedTextfield->set_height(this->textfield->get_height());
HXLINE(  52)		clonedTextfield->set_text(this->textfield->get_text());
HXLINE(  53)		clonedTextfield->setTextFormat(this->textfield->getTextFormat(null(),null()),null(),null());
HXLINE(  54)		clonedTextfield->set_background(this->textfield->get_background());
HXLINE(  55)		clonedTextfield->set_backgroundColor(this->textfield->get_backgroundColor());
HXLINE(  56)		return ::com::theproductengine::ui::Tab_obj::fromTextField(this->textfield);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tab_obj,clone,return )

 ::com::theproductengine::ui::Tab Tab_obj::fromTextField( ::openfl::text::TextField textField){
            	HX_GC_STACKFRAME(&_hx_pos_9808d94f9cb58463_15_fromTextField)
HXLINE(  16)		 ::com::theproductengine::ui::Tab tab =  ::com::theproductengine::ui::Tab_obj::__alloc( HX_CTX );
HXLINE(  17)		 ::openfl::text::TextField tab1 = tab->textfield;
HXDLIN(  17)		tab1->set_border(textField->get_border());
HXLINE(  18)		 ::openfl::text::TextField tab2 = tab->textfield;
HXDLIN(  18)		tab2->set_x(textField->get_x());
HXLINE(  19)		 ::openfl::text::TextField tab3 = tab->textfield;
HXDLIN(  19)		tab3->set_y(textField->get_y());
HXLINE(  20)		 ::openfl::text::TextField tab4 = tab->textfield;
HXDLIN(  20)		tab4->set_width(textField->get_width());
HXLINE(  21)		 ::openfl::text::TextField tab5 = tab->textfield;
HXDLIN(  21)		tab5->set_height(textField->get_height());
HXLINE(  22)		 ::openfl::text::TextField tab6 = tab->textfield;
HXDLIN(  22)		tab6->set_text(textField->get_text());
HXLINE(  23)		 ::openfl::text::TextField tab7 = tab->textfield;
HXDLIN(  23)		tab7->setTextFormat(textField->getTextFormat(null(),null()),null(),null());
HXLINE(  24)		 ::openfl::text::TextField tab8 = tab->textfield;
HXDLIN(  24)		tab8->set_background(textField->get_background());
HXLINE(  25)		 ::openfl::text::TextField tab9 = tab->textfield;
HXDLIN(  25)		tab9->set_backgroundColor(textField->get_backgroundColor());
HXLINE(  26)		return tab;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tab_obj,fromTextField,return )

 ::com::theproductengine::builder::TabBuilder Tab_obj::builder(){
            	HX_GC_STACKFRAME(&_hx_pos_9808d94f9cb58463_41_builder)
HXDLIN(  41)		return  ::com::theproductengine::builder::TabBuilder_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tab_obj,builder,return )


::hx::ObjectPtr< Tab_obj > Tab_obj::__new() {
	::hx::ObjectPtr< Tab_obj > __this = new Tab_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Tab_obj > Tab_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Tab_obj *__this = (Tab_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tab_obj), true, "com.theproductengine.ui.Tab"));
	*(void **)__this = Tab_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Tab_obj::Tab_obj()
{
}

void Tab_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tab);
	HX_MARK_MEMBER_NAME(textfield,"textfield");
	HX_MARK_END_CLASS();
}

void Tab_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(textfield,"textfield");
}

::hx::Val Tab_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textfield") ) { return ::hx::Val( textfield ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getTextField") ) { return ::hx::Val( getTextField_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Tab_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"builder") ) { outValue = builder_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromTextField") ) { outValue = fromTextField_dyn(); return true; }
	}
	return false;
}

::hx::Val Tab_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"textfield") ) { textfield=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tab_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("textfield",ed,b4,53,06));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Tab_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(Tab_obj,textfield),HX_("textfield",ed,b4,53,06)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Tab_obj_sStaticStorageInfo = 0;
#endif

static ::String Tab_obj_sMemberFields[] = {
	HX_("textfield",ed,b4,53,06),
	HX_("getTextField",57,c1,d7,a8),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class Tab_obj::__mClass;

static ::String Tab_obj_sStaticFields[] = {
	HX_("fromTextField",03,62,6a,0d),
	HX_("builder",1b,db,ba,6f),
	::String(null())
};

void Tab_obj::__register()
{
	Tab_obj _hx_dummy;
	Tab_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("com.theproductengine.ui.Tab",7c,cd,7f,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tab_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Tab_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Tab_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Tab_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tab_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tab_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace theproductengine
} // end namespace ui
