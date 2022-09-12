#include <hxcpp.h>

#ifndef INCLUDED_com_theproductengine_factory_TabGroupAbstract
#include <com/theproductengine/factory/TabGroupAbstract.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_21ba8757f7289f50_24_getTabs,"com.theproductengine.factory.TabGroupAbstract","getTabs",0x8bbe3557,"com.theproductengine.factory.TabGroupAbstract.getTabs","com/theproductengine/factory/TabGroupAbstract.hx",24,0x41613a8c)
HX_LOCAL_STACK_FRAME(_hx_pos_21ba8757f7289f50_29_getMainTextField,"com.theproductengine.factory.TabGroupAbstract","getMainTextField",0xe853155b,"com.theproductengine.factory.TabGroupAbstract.getMainTextField","com/theproductengine/factory/TabGroupAbstract.hx",29,0x41613a8c)
HX_LOCAL_STACK_FRAME(_hx_pos_21ba8757f7289f50_33_populateArray,"com.theproductengine.factory.TabGroupAbstract","populateArray",0xe8889fb2,"com.theproductengine.factory.TabGroupAbstract.populateArray","com/theproductengine/factory/TabGroupAbstract.hx",33,0x41613a8c)
namespace com{
namespace theproductengine{
namespace factory{

void TabGroupAbstract_obj::__construct() { }

bool TabGroupAbstract_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7436e279;
}

::Array< ::Dynamic> TabGroupAbstract_obj::getTabs(){
            	HX_STACKFRAME(&_hx_pos_21ba8757f7289f50_24_getTabs)
HXDLIN(  24)		return this->tabs;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabGroupAbstract_obj,getTabs,return )

 ::openfl::text::TextField TabGroupAbstract_obj::getMainTextField(){
            	HX_STACKFRAME(&_hx_pos_21ba8757f7289f50_29_getMainTextField)
HXDLIN(  29)		return this->mainTab;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabGroupAbstract_obj,getMainTextField,return )

void TabGroupAbstract_obj::populateArray(){
            	HX_STACKFRAME(&_hx_pos_21ba8757f7289f50_33_populateArray)
HXLINE(  34)		Float kWidth = ((this->maxWidth - ((( (Float)((this->amount - 1)) ) * this->clearence) * ( (Float)(2) ))) / ( (Float)(this->amount) ));
HXLINE(  35)		if ((this->example->getTextField()->get_width() > kWidth)) {
HXLINE(  37)			this->example->getTextField()->set_width(kWidth);
            		}
HXLINE(  39)		this->example->getTextField()->set_y(this->y);
HXLINE(  40)		Float previousX = ( (Float)(0) );
HXLINE(  41)		{
HXLINE(  41)			int _g = 0;
HXDLIN(  41)			int _g1 = this->amount;
HXDLIN(  41)			while((_g < _g1)){
HXLINE(  41)				_g = (_g + 1);
HXDLIN(  41)				int i = (_g - 1);
HXLINE(  43)				if ((i == 0)) {
HXLINE(  45)					this->example->getTextField()->set_x(this->x);
            				}
            				else {
HXLINE(  49)					 ::openfl::text::TextField _hx_tmp = this->example->getTextField();
HXDLIN(  49)					Float _hx_tmp1 = (previousX + this->clearence);
HXDLIN(  49)					Float _hx_tmp2 = (_hx_tmp1 + this->example->getTextField()->get_width());
HXDLIN(  49)					_hx_tmp->set_x((_hx_tmp2 + this->clearence));
            				}
HXLINE(  51)				::Array< ::Dynamic> _hx_tmp = this->tabs;
HXDLIN(  51)				_hx_tmp->push(this->example->clone());
HXLINE(  52)				previousX = this->example->getTextField()->get_x();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabGroupAbstract_obj,populateArray,(void))


TabGroupAbstract_obj::TabGroupAbstract_obj()
{
}

void TabGroupAbstract_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabGroupAbstract);
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

void TabGroupAbstract_obj::__Visit(HX_VISIT_PARAMS)
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

::hx::Val TabGroupAbstract_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

::hx::Val TabGroupAbstract_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

void TabGroupAbstract_obj::__GetFields(Array< ::String> &outFields)
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
static ::hx::StorageInfo TabGroupAbstract_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(TabGroupAbstract_obj,mainTab),HX_("mainTab",9c,03,4a,3b)},
	{::hx::fsInt,(int)offsetof(TabGroupAbstract_obj,amount),HX_("amount",d8,11,03,d5)},
	{::hx::fsFloat,(int)offsetof(TabGroupAbstract_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(TabGroupAbstract_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(TabGroupAbstract_obj,clearence),HX_("clearence",58,17,fe,cb)},
	{::hx::fsFloat,(int)offsetof(TabGroupAbstract_obj,maxWidth),HX_("maxWidth",c2,08,80,74)},
	{::hx::fsObject /*  ::com::theproductengine::ui::Tab */ ,(int)offsetof(TabGroupAbstract_obj,example),HX_("example",2a,08,0b,85)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TabGroupAbstract_obj,tabs),HX_("tabs",7e,b0,f6,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabGroupAbstract_obj_sStaticStorageInfo = 0;
#endif

static ::String TabGroupAbstract_obj_sMemberFields[] = {
	HX_("mainTab",9c,03,4a,3b),
	HX_("amount",d8,11,03,d5),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("clearence",58,17,fe,cb),
	HX_("maxWidth",c2,08,80,74),
	HX_("example",2a,08,0b,85),
	HX_("tabs",7e,b0,f6,4c),
	HX_("getTabs",34,60,79,1f),
	HX_("getMainTextField",de,26,2c,bd),
	HX_("populateArray",4f,ce,06,e6),
	::String(null()) };

::hx::Class TabGroupAbstract_obj::__mClass;

void TabGroupAbstract_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("com.theproductengine.factory.TabGroupAbstract",91,da,0d,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabGroupAbstract_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xbb263655 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace theproductengine
} // end namespace factory
