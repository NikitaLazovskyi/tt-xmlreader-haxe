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

HX_DEFINE_STACK_FRAME(_hx_pos_6bc001f781fb8acb_23_new,"com.theproductengine.builder.TabBuilder","new",0x2ab409ac,"com.theproductengine.builder.TabBuilder.new","com/theproductengine/builder/TabBuilder.hx",23,0x2f7587c3)
HX_LOCAL_STACK_FRAME(_hx_pos_6bc001f781fb8acb_28_setX,"com.theproductengine.builder.TabBuilder","setX",0x36227baa,"com.theproductengine.builder.TabBuilder.setX","com/theproductengine/builder/TabBuilder.hx",28,0x2f7587c3)
HX_LOCAL_STACK_FRAME(_hx_pos_6bc001f781fb8acb_34_setY,"com.theproductengine.builder.TabBuilder","setY",0x36227bab,"com.theproductengine.builder.TabBuilder.setY","com/theproductengine/builder/TabBuilder.hx",34,0x2f7587c3)
HX_LOCAL_STACK_FRAME(_hx_pos_6bc001f781fb8acb_40_setWidth,"com.theproductengine.builder.TabBuilder","setWidth",0xcce7b238,"com.theproductengine.builder.TabBuilder.setWidth","com/theproductengine/builder/TabBuilder.hx",40,0x2f7587c3)
HX_LOCAL_STACK_FRAME(_hx_pos_6bc001f781fb8acb_46_setHeight,"com.theproductengine.builder.TabBuilder","setHeight",0x3423b775,"com.theproductengine.builder.TabBuilder.setHeight","com/theproductengine/builder/TabBuilder.hx",46,0x2f7587c3)
HX_LOCAL_STACK_FRAME(_hx_pos_6bc001f781fb8acb_52_setTextFormat,"com.theproductengine.builder.TabBuilder","setTextFormat",0x80409e52,"com.theproductengine.builder.TabBuilder.setTextFormat","com/theproductengine/builder/TabBuilder.hx",52,0x2f7587c3)
HX_LOCAL_STACK_FRAME(_hx_pos_6bc001f781fb8acb_58_setText,"com.theproductengine.builder.TabBuilder","setText",0x8662dcbb,"com.theproductengine.builder.TabBuilder.setText","com/theproductengine/builder/TabBuilder.hx",58,0x2f7587c3)
HX_LOCAL_STACK_FRAME(_hx_pos_6bc001f781fb8acb_64_setBackground,"com.theproductengine.builder.TabBuilder","setBackground",0x71df227c,"com.theproductengine.builder.TabBuilder.setBackground","com/theproductengine/builder/TabBuilder.hx",64,0x2f7587c3)
HX_LOCAL_STACK_FRAME(_hx_pos_6bc001f781fb8acb_70_setBackgroundColor,"com.theproductengine.builder.TabBuilder","setBackgroundColor",0xf9d03d47,"com.theproductengine.builder.TabBuilder.setBackgroundColor","com/theproductengine/builder/TabBuilder.hx",70,0x2f7587c3)
HX_LOCAL_STACK_FRAME(_hx_pos_6bc001f781fb8acb_76_setBorder,"com.theproductengine.builder.TabBuilder","setBorder",0x95f1fc7a,"com.theproductengine.builder.TabBuilder.setBorder","com/theproductengine/builder/TabBuilder.hx",76,0x2f7587c3)
HX_LOCAL_STACK_FRAME(_hx_pos_6bc001f781fb8acb_82_build,"com.theproductengine.builder.TabBuilder","build",0x68c4ff7a,"com.theproductengine.builder.TabBuilder.build","com/theproductengine/builder/TabBuilder.hx",82,0x2f7587c3)
namespace com{
namespace theproductengine{
namespace builder{

void TabBuilder_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6bc001f781fb8acb_23_new)
            	}

Dynamic TabBuilder_obj::__CreateEmpty() { return new TabBuilder_obj; }

void *TabBuilder_obj::_hx_vtable = 0;

Dynamic TabBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabBuilder_obj > _hx_result = new TabBuilder_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabBuilder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x751259c0;
}

 ::com::theproductengine::builder::TabBuilder TabBuilder_obj::setX(Float x){
            	HX_STACKFRAME(&_hx_pos_6bc001f781fb8acb_28_setX)
HXLINE(  29)		this->x = x;
HXLINE(  30)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBuilder_obj,setX,return )

 ::com::theproductengine::builder::TabBuilder TabBuilder_obj::setY(Float y){
            	HX_STACKFRAME(&_hx_pos_6bc001f781fb8acb_34_setY)
HXLINE(  35)		this->y = y;
HXLINE(  36)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBuilder_obj,setY,return )

 ::com::theproductengine::builder::TabBuilder TabBuilder_obj::setWidth(Float width){
            	HX_STACKFRAME(&_hx_pos_6bc001f781fb8acb_40_setWidth)
HXLINE(  41)		this->width = width;
HXLINE(  42)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBuilder_obj,setWidth,return )

 ::com::theproductengine::builder::TabBuilder TabBuilder_obj::setHeight(Float height){
            	HX_STACKFRAME(&_hx_pos_6bc001f781fb8acb_46_setHeight)
HXLINE(  47)		this->height = height;
HXLINE(  48)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBuilder_obj,setHeight,return )

 ::com::theproductengine::builder::TabBuilder TabBuilder_obj::setTextFormat( ::openfl::text::TextFormat textFormat){
            	HX_STACKFRAME(&_hx_pos_6bc001f781fb8acb_52_setTextFormat)
HXLINE(  53)		this->textFormat = textFormat;
HXLINE(  54)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBuilder_obj,setTextFormat,return )

 ::com::theproductengine::builder::TabBuilder TabBuilder_obj::setText(::String text){
            	HX_STACKFRAME(&_hx_pos_6bc001f781fb8acb_58_setText)
HXLINE(  59)		this->text = text;
HXLINE(  60)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBuilder_obj,setText,return )

 ::com::theproductengine::builder::TabBuilder TabBuilder_obj::setBackground(bool background){
            	HX_STACKFRAME(&_hx_pos_6bc001f781fb8acb_64_setBackground)
HXLINE(  65)		this->background = background;
HXLINE(  66)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBuilder_obj,setBackground,return )

 ::com::theproductengine::builder::TabBuilder TabBuilder_obj::setBackgroundColor(int backgroundColor){
            	HX_STACKFRAME(&_hx_pos_6bc001f781fb8acb_70_setBackgroundColor)
HXLINE(  71)		this->backgroundColor = backgroundColor;
HXLINE(  72)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBuilder_obj,setBackgroundColor,return )

 ::com::theproductengine::builder::TabBuilder TabBuilder_obj::setBorder(bool border){
            	HX_STACKFRAME(&_hx_pos_6bc001f781fb8acb_76_setBorder)
HXLINE(  77)		this->border = border;
HXLINE(  78)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBuilder_obj,setBorder,return )

 ::com::theproductengine::ui::Tab TabBuilder_obj::build(){
            	HX_GC_STACKFRAME(&_hx_pos_6bc001f781fb8acb_82_build)
HXLINE(  83)		 ::openfl::text::TextField textfield =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  84)		textfield->set_border(this->border);
HXLINE(  85)		textfield->set_x(this->x);
HXLINE(  86)		textfield->set_y(this->y);
HXLINE(  87)		textfield->set_width(this->width);
HXLINE(  88)		textfield->set_height(this->height);
HXLINE(  89)		textfield->set_text(this->text);
HXLINE(  90)		textfield->setTextFormat(this->textFormat,null(),null());
HXLINE(  91)		textfield->set_background(this->background);
HXLINE(  92)		textfield->set_backgroundColor(this->backgroundColor);
HXLINE(  94)		 ::com::theproductengine::ui::Tab tab = ::com::theproductengine::ui::Tab_obj::fromTextField(textfield);
HXLINE(  95)		return tab;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBuilder_obj,build,return )


::hx::ObjectPtr< TabBuilder_obj > TabBuilder_obj::__new() {
	::hx::ObjectPtr< TabBuilder_obj > __this = new TabBuilder_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TabBuilder_obj > TabBuilder_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TabBuilder_obj *__this = (TabBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabBuilder_obj), true, "com.theproductengine.builder.TabBuilder"));
	*(void **)__this = TabBuilder_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TabBuilder_obj::TabBuilder_obj()
{
}

void TabBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabBuilder);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(textFormat,"textFormat");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_END_CLASS();
}

void TabBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(textFormat,"textFormat");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(border,"border");
}

::hx::Val TabBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"setX") ) { return ::hx::Val( setX_dyn() ); }
		if (HX_FIELD_EQ(inName,"setY") ) { return ::hx::Val( setY_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"build") ) { return ::hx::Val( build_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"border") ) { return ::hx::Val( border ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setText") ) { return ::hx::Val( setText_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setWidth") ) { return ::hx::Val( setWidth_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setHeight") ) { return ::hx::Val( setHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"setBorder") ) { return ::hx::Val( setBorder_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textFormat") ) { return ::hx::Val( textFormat ); }
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setTextFormat") ) { return ::hx::Val( setTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"setBackground") ) { return ::hx::Val( setBackground_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return ::hx::Val( backgroundColor ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setBackgroundColor") ) { return ::hx::Val( setBackgroundColor_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TabBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textFormat") ) { textFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("textFormat",c4,0f,7f,34));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("border",ec,4c,1a,64));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(TabBuilder_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(TabBuilder_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(TabBuilder_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(TabBuilder_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(TabBuilder_obj,textFormat),HX_("textFormat",c4,0f,7f,34)},
	{::hx::fsString,(int)offsetof(TabBuilder_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsBool,(int)offsetof(TabBuilder_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsInt,(int)offsetof(TabBuilder_obj,backgroundColor),HX_("backgroundColor",95,4e,47,0d)},
	{::hx::fsBool,(int)offsetof(TabBuilder_obj,border),HX_("border",ec,4c,1a,64)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String TabBuilder_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("textFormat",c4,0f,7f,34),
	HX_("text",ad,cc,f9,4c),
	HX_("background",ee,93,1d,26),
	HX_("backgroundColor",95,4e,47,0d),
	HX_("border",ec,4c,1a,64),
	HX_("setX",76,92,50,4c),
	HX_("setY",77,92,50,4c),
	HX_("setWidth",04,1f,97,d8),
	HX_("setHeight",29,7d,f3,61),
	HX_("setTextFormat",06,4e,f7,d5),
	HX_("setText",6f,0d,7e,12),
	HX_("setBackground",30,d2,95,c7),
	HX_("setBackgroundColor",13,21,bc,9c),
	HX_("setBorder",2e,c2,c1,c3),
	HX_("build",2e,db,ea,ba),
	::String(null()) };

::hx::Class TabBuilder_obj::__mClass;

void TabBuilder_obj::__register()
{
	TabBuilder_obj _hx_dummy;
	TabBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("com.theproductengine.builder.TabBuilder",ba,03,33,2a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace theproductengine
} // end namespace builder
