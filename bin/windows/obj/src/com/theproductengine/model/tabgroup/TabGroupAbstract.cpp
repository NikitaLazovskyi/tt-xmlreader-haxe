#include <hxcpp.h>

#ifndef INCLUDED_com_theproductengine_interfaces_Cloneable
#include <com/theproductengine/interfaces/Cloneable.h>
#endif
#ifndef INCLUDED_com_theproductengine_model_tabgroup_TabGroupAbstract
#include <com/theproductengine/model/tabgroup/TabGroupAbstract.h>
#endif
#ifndef INCLUDED_com_theproductengine_ui_Tab
#include <com/theproductengine/ui/Tab.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_805ff885d77fd49d_32_getTabs,"com.theproductengine.model.tabgroup.TabGroupAbstract","getTabs",0x16424830,"com.theproductengine.model.tabgroup.TabGroupAbstract.getTabs","com/theproductengine/model/tabgroup/TabGroupAbstract.hx",32,0x77d14f94)
HX_LOCAL_STACK_FRAME(_hx_pos_805ff885d77fd49d_37_getMainTextField,"com.theproductengine.model.tabgroup.TabGroupAbstract","getMainTextField",0x28dc5f62,"com.theproductengine.model.tabgroup.TabGroupAbstract.getMainTextField","com/theproductengine/model/tabgroup/TabGroupAbstract.hx",37,0x77d14f94)
HX_LOCAL_STACK_FRAME(_hx_pos_805ff885d77fd49d_41_populateArray,"com.theproductengine.model.tabgroup.TabGroupAbstract","populateArray",0xf017db4b,"com.theproductengine.model.tabgroup.TabGroupAbstract.populateArray","com/theproductengine/model/tabgroup/TabGroupAbstract.hx",41,0x77d14f94)
HX_LOCAL_STACK_FRAME(_hx_pos_805ff885d77fd49d_67_getMainSprite,"com.theproductengine.model.tabgroup.TabGroupAbstract","getMainSprite",0x7fc56250,"com.theproductengine.model.tabgroup.TabGroupAbstract.getMainSprite","com/theproductengine/model/tabgroup/TabGroupAbstract.hx",67,0x77d14f94)
namespace com{
namespace theproductengine{
namespace model{
namespace tabgroup{

void TabGroupAbstract_obj::__construct() { }

bool TabGroupAbstract_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x21af29fe;
}

::Array< ::Dynamic> TabGroupAbstract_obj::getTabs(){
            	HX_STACKFRAME(&_hx_pos_805ff885d77fd49d_32_getTabs)
HXDLIN(  32)		return this->tabs;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabGroupAbstract_obj,getTabs,return )

 ::openfl::text::TextField TabGroupAbstract_obj::getMainTextField(){
            	HX_STACKFRAME(&_hx_pos_805ff885d77fd49d_37_getMainTextField)
HXDLIN(  37)		return this->mainTab;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabGroupAbstract_obj,getMainTextField,return )

void TabGroupAbstract_obj::populateArray(){
            	HX_STACKFRAME(&_hx_pos_805ff885d77fd49d_41_populateArray)
HXLINE(  42)		Float kWidth = ((this->maxWidth - ((( (Float)((this->amount - 1)) ) * this->clearence) * ( (Float)(2) ))) / ( (Float)(this->amount) ));
HXLINE(  43)		if ((this->example->getTextField()->get_width() > kWidth)) {
HXLINE(  45)			this->example->getTextField()->set_width(kWidth);
            		}
HXLINE(  47)		this->example->getTextField()->set_y(this->y);
HXLINE(  48)		Float previousX = ( (Float)(0) );
HXLINE(  49)		{
HXLINE(  49)			int _g = 0;
HXDLIN(  49)			int _g1 = this->amount;
HXDLIN(  49)			while((_g < _g1)){
HXLINE(  49)				_g = (_g + 1);
HXDLIN(  49)				int i = (_g - 1);
HXLINE(  51)				if ((i == 0)) {
HXLINE(  53)					this->example->getTextField()->set_x(this->x);
            				}
            				else {
HXLINE(  57)					 ::openfl::text::TextField _hx_tmp = this->example->getTextField();
HXDLIN(  57)					Float _hx_tmp1 = (previousX + this->clearence);
HXDLIN(  57)					Float _hx_tmp2 = (_hx_tmp1 + this->example->getTextField()->get_width());
HXDLIN(  57)					_hx_tmp->set_x((_hx_tmp2 + this->clearence));
            				}
HXLINE(  59)				::Array< ::Dynamic> _hx_tmp = this->tabs;
HXDLIN(  59)				_hx_tmp->push(this->example->clone());
HXLINE(  60)				previousX = this->example->getTextField()->get_x();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabGroupAbstract_obj,populateArray,(void))

 ::openfl::display::Sprite TabGroupAbstract_obj::getMainSprite(){
            	HX_STACKFRAME(&_hx_pos_805ff885d77fd49d_67_getMainSprite)
HXDLIN(  67)		return this->mainSprite;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabGroupAbstract_obj,getMainSprite,return )


TabGroupAbstract_obj::TabGroupAbstract_obj()
{
}

void TabGroupAbstract_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabGroupAbstract);
	HX_MARK_MEMBER_NAME(backgroundTabColor,"backgroundTabColor");
	HX_MARK_MEMBER_NAME(amount,"amount");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(clearence,"clearence");
	HX_MARK_MEMBER_NAME(maxWidth,"maxWidth");
	HX_MARK_MEMBER_NAME(mainTab,"mainTab");
	HX_MARK_MEMBER_NAME(example,"example");
	HX_MARK_MEMBER_NAME(tabs,"tabs");
	HX_MARK_MEMBER_NAME(mainSprite,"mainSprite");
	HX_MARK_END_CLASS();
}

void TabGroupAbstract_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backgroundTabColor,"backgroundTabColor");
	HX_VISIT_MEMBER_NAME(amount,"amount");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(clearence,"clearence");
	HX_VISIT_MEMBER_NAME(maxWidth,"maxWidth");
	HX_VISIT_MEMBER_NAME(mainTab,"mainTab");
	HX_VISIT_MEMBER_NAME(example,"example");
	HX_VISIT_MEMBER_NAME(tabs,"tabs");
	HX_VISIT_MEMBER_NAME(mainSprite,"mainSprite");
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
	case 10:
		if (HX_FIELD_EQ(inName,"mainSprite") ) { return ::hx::Val( mainSprite ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"populateArray") ) { return ::hx::Val( populateArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMainSprite") ) { return ::hx::Val( getMainSprite_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getMainTextField") ) { return ::hx::Val( getMainTextField_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"backgroundTabColor") ) { return ::hx::Val( backgroundTabColor ); }
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
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mainSprite") ) { mainSprite=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"backgroundTabColor") ) { backgroundTabColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabGroupAbstract_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("backgroundTabColor",dc,e0,8a,59));
	outFields->push(HX_("amount",d8,11,03,d5));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("clearence",58,17,fe,cb));
	outFields->push(HX_("maxWidth",c2,08,80,74));
	outFields->push(HX_("mainTab",9c,03,4a,3b));
	outFields->push(HX_("example",2a,08,0b,85));
	outFields->push(HX_("tabs",7e,b0,f6,4c));
	outFields->push(HX_("mainSprite",1e,f9,41,19));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabGroupAbstract_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TabGroupAbstract_obj,backgroundTabColor),HX_("backgroundTabColor",dc,e0,8a,59)},
	{::hx::fsInt,(int)offsetof(TabGroupAbstract_obj,amount),HX_("amount",d8,11,03,d5)},
	{::hx::fsFloat,(int)offsetof(TabGroupAbstract_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(TabGroupAbstract_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(TabGroupAbstract_obj,clearence),HX_("clearence",58,17,fe,cb)},
	{::hx::fsFloat,(int)offsetof(TabGroupAbstract_obj,maxWidth),HX_("maxWidth",c2,08,80,74)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(TabGroupAbstract_obj,mainTab),HX_("mainTab",9c,03,4a,3b)},
	{::hx::fsObject /*  ::com::theproductengine::ui::Tab */ ,(int)offsetof(TabGroupAbstract_obj,example),HX_("example",2a,08,0b,85)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TabGroupAbstract_obj,tabs),HX_("tabs",7e,b0,f6,4c)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(TabGroupAbstract_obj,mainSprite),HX_("mainSprite",1e,f9,41,19)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabGroupAbstract_obj_sStaticStorageInfo = 0;
#endif

static ::String TabGroupAbstract_obj_sMemberFields[] = {
	HX_("backgroundTabColor",dc,e0,8a,59),
	HX_("amount",d8,11,03,d5),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("clearence",58,17,fe,cb),
	HX_("maxWidth",c2,08,80,74),
	HX_("mainTab",9c,03,4a,3b),
	HX_("example",2a,08,0b,85),
	HX_("tabs",7e,b0,f6,4c),
	HX_("mainSprite",1e,f9,41,19),
	HX_("getTabs",34,60,79,1f),
	HX_("getMainTextField",de,26,2c,bd),
	HX_("populateArray",4f,ce,06,e6),
	HX_("getMainSprite",54,55,b4,75),
	::String(null()) };

::hx::Class TabGroupAbstract_obj::__mClass;

void TabGroupAbstract_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("com.theproductengine.model.tabgroup.TabGroupAbstract",6a,ec,f6,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabGroupAbstract_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xdaf9b73e >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace theproductengine
} // end namespace model
} // end namespace tabgroup
