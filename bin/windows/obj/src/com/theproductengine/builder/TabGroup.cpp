#include <hxcpp.h>

#ifndef INCLUDED_com_theproductengine_builder_TabGroup
#include <com/theproductengine/builder/TabGroup.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_cc92909b3711933c_24_new,"com.theproductengine.builder.TabGroup","new",0x2a0f2e10,"com.theproductengine.builder.TabGroup.new","com/theproductengine/builder/TabGroup.hx",24,0x42888e1f)
HX_LOCAL_STACK_FRAME(_hx_pos_cc92909b3711933c_48_getTabs,"com.theproductengine.builder.TabGroup","getTabs",0xdd2d55e4,"com.theproductengine.builder.TabGroup.getTabs","com/theproductengine/builder/TabGroup.hx",48,0x42888e1f)
HX_LOCAL_STACK_FRAME(_hx_pos_cc92909b3711933c_52_populateArray,"com.theproductengine.builder.TabGroup","populateArray",0x0d6227ff,"com.theproductengine.builder.TabGroup.populateArray","com/theproductengine/builder/TabGroup.hx",52,0x42888e1f)
HX_LOCAL_STACK_FRAME(_hx_pos_cc92909b3711933c_78_getMainTextField,"com.theproductengine.builder.TabGroup","getMainTextField",0xa903fb2e,"com.theproductengine.builder.TabGroup.getMainTextField","com/theproductengine/builder/TabGroup.hx",78,0x42888e1f)
namespace com{
namespace theproductengine{
namespace builder{

void TabGroup_obj::__construct(Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,int amount,Float maxWidth, ::openfl::text::TextFormat txtFrmt,int backgroundTabColor){
            	HX_GC_STACKFRAME(&_hx_pos_cc92909b3711933c_24_new)
HXLINE(  25)		this->amount = amount;
HXLINE(  26)		this->x = x;
HXLINE(  27)		this->y = y;
HXLINE(  28)		this->clearence = clearence;
HXLINE(  29)		this->maxWidth = maxWidth;
HXLINE(  30)		this->example = tab;
HXLINE(  31)		this->tabs = ::Array_obj< ::Dynamic>::__new();
HXLINE(  32)		this->populateArray();
HXLINE(  34)		this->mainTab =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  35)		this->mainTab->set_x(x);
HXLINE(  36)		 ::openfl::text::TextField _hx_tmp = this->mainTab;
HXDLIN(  36)		_hx_tmp->set_y((y + tab->getTextField()->get_height()));
HXLINE(  37)		this->mainTab->set_text(HX_("Some text",39,e5,9f,01));
HXLINE(  38)		this->mainTab->setTextFormat(txtFrmt,null(),null());
HXLINE(  39)		this->mainTab->set_border(true);
HXLINE(  40)		this->mainTab->set_height((maxWidth / ( (Float)(2) )));
HXLINE(  41)		this->mainTab->set_width(maxWidth);
HXLINE(  42)		this->mainTab->set_background(true);
HXLINE(  43)		this->mainTab->set_backgroundColor(backgroundTabColor);
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
	return inClassId==(int)0x00000001 || inClassId==(int)0x4646b96c;
}

::Array< ::Dynamic> TabGroup_obj::getTabs(){
            	HX_STACKFRAME(&_hx_pos_cc92909b3711933c_48_getTabs)
HXDLIN(  48)		return this->tabs;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabGroup_obj,getTabs,return )

void TabGroup_obj::populateArray(){
            	HX_STACKFRAME(&_hx_pos_cc92909b3711933c_52_populateArray)
HXLINE(  53)		Float kWidth = ((this->maxWidth - ((( (Float)((this->amount - 1)) ) * this->clearence) * ( (Float)(2) ))) / ( (Float)(this->amount) ));
HXLINE(  54)		if ((this->example->getTextField()->get_width() > kWidth)) {
HXLINE(  56)			this->example->getTextField()->set_width(kWidth);
            		}
HXLINE(  58)		this->example->getTextField()->set_y(this->y);
HXLINE(  59)		Float previousX = ( (Float)(0) );
HXLINE(  60)		{
HXLINE(  60)			int _g = 0;
HXDLIN(  60)			int _g1 = this->amount;
HXDLIN(  60)			while((_g < _g1)){
HXLINE(  60)				_g = (_g + 1);
HXDLIN(  60)				int i = (_g - 1);
HXLINE(  62)				if ((i == 0)) {
HXLINE(  64)					this->example->getTextField()->set_x(this->x);
            				}
            				else {
HXLINE(  68)					 ::openfl::text::TextField _hx_tmp = this->example->getTextField();
HXDLIN(  68)					Float _hx_tmp1 = (previousX + this->clearence);
HXDLIN(  68)					Float _hx_tmp2 = (_hx_tmp1 + this->example->getTextField()->get_width());
HXDLIN(  68)					_hx_tmp->set_x((_hx_tmp2 + this->clearence));
            				}
HXLINE(  70)				::Array< ::Dynamic> _hx_tmp = this->tabs;
HXDLIN(  70)				_hx_tmp->push(this->example->clone());
HXLINE(  71)				previousX = this->example->getTextField()->get_x();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabGroup_obj,populateArray,(void))

 ::openfl::text::TextField TabGroup_obj::getMainTextField(){
            	HX_STACKFRAME(&_hx_pos_cc92909b3711933c_78_getMainTextField)
HXDLIN(  78)		return this->mainTab;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabGroup_obj,getMainTextField,return )


::hx::ObjectPtr< TabGroup_obj > TabGroup_obj::__new(Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,int amount,Float maxWidth, ::openfl::text::TextFormat txtFrmt,int backgroundTabColor) {
	::hx::ObjectPtr< TabGroup_obj > __this = new TabGroup_obj();
	__this->__construct(x,y,clearence,tab,amount,maxWidth,txtFrmt,backgroundTabColor);
	return __this;
}

::hx::ObjectPtr< TabGroup_obj > TabGroup_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,int amount,Float maxWidth, ::openfl::text::TextFormat txtFrmt,int backgroundTabColor) {
	TabGroup_obj *__this = (TabGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabGroup_obj), true, "com.theproductengine.builder.TabGroup"));
	*(void **)__this = TabGroup_obj::_hx_vtable;
	__this->__construct(x,y,clearence,tab,amount,maxWidth,txtFrmt,backgroundTabColor);
	return __this;
}

TabGroup_obj::TabGroup_obj()
{
}

void TabGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabGroup);
	HX_MARK_MEMBER_NAME(mainTab,"mainTab");
	HX_MARK_MEMBER_NAME(amount,"amount");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(clearence,"clearence");
	HX_MARK_MEMBER_NAME(maxWidth,"maxWidth");
	HX_MARK_MEMBER_NAME(example,"example");
	HX_MARK_MEMBER_NAME(tabs,"tabs");
	HX_MARK_END_CLASS();
}

void TabGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mainTab,"mainTab");
	HX_VISIT_MEMBER_NAME(amount,"amount");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(clearence,"clearence");
	HX_VISIT_MEMBER_NAME(maxWidth,"maxWidth");
	HX_VISIT_MEMBER_NAME(example,"example");
	HX_VISIT_MEMBER_NAME(tabs,"tabs");
}

::hx::Val TabGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tabs") ) { return ::hx::Val( tabs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"amount") ) { return ::hx::Val( amount ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mainTab") ) { return ::hx::Val( mainTab ); }
		if (HX_FIELD_EQ(inName,"example") ) { return ::hx::Val( example ); }
		if (HX_FIELD_EQ(inName,"getTabs") ) { return ::hx::Val( getTabs_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxWidth") ) { return ::hx::Val( maxWidth ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clearence") ) { return ::hx::Val( clearence ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"populateArray") ) { return ::hx::Val( populateArray_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getMainTextField") ) { return ::hx::Val( getMainTextField_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TabGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tabs") ) { tabs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"amount") ) { amount=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mainTab") ) { mainTab=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"example") ) { example=inValue.Cast<  ::com::theproductengine::ui::Tab >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxWidth") ) { maxWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clearence") ) { clearence=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mainTab",9c,03,4a,3b));
	outFields->push(HX_("amount",d8,11,03,d5));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("clearence",58,17,fe,cb));
	outFields->push(HX_("maxWidth",c2,08,80,74));
	outFields->push(HX_("example",2a,08,0b,85));
	outFields->push(HX_("tabs",7e,b0,f6,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(TabGroup_obj,mainTab),HX_("mainTab",9c,03,4a,3b)},
	{::hx::fsInt,(int)offsetof(TabGroup_obj,amount),HX_("amount",d8,11,03,d5)},
	{::hx::fsFloat,(int)offsetof(TabGroup_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(TabGroup_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(TabGroup_obj,clearence),HX_("clearence",58,17,fe,cb)},
	{::hx::fsFloat,(int)offsetof(TabGroup_obj,maxWidth),HX_("maxWidth",c2,08,80,74)},
	{::hx::fsObject /*  ::com::theproductengine::ui::Tab */ ,(int)offsetof(TabGroup_obj,example),HX_("example",2a,08,0b,85)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TabGroup_obj,tabs),HX_("tabs",7e,b0,f6,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String TabGroup_obj_sMemberFields[] = {
	HX_("mainTab",9c,03,4a,3b),
	HX_("amount",d8,11,03,d5),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("clearence",58,17,fe,cb),
	HX_("maxWidth",c2,08,80,74),
	HX_("example",2a,08,0b,85),
	HX_("tabs",7e,b0,f6,4c),
	HX_("getTabs",34,60,79,1f),
	HX_("populateArray",4f,ce,06,e6),
	HX_("getMainTextField",de,26,2c,bd),
	::String(null()) };

::hx::Class TabGroup_obj::__mClass;

void TabGroup_obj::__register()
{
	TabGroup_obj _hx_dummy;
	TabGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("com.theproductengine.builder.TabGroup",1e,26,c3,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabGroup_obj_sMemberFields);
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
} // end namespace builder
