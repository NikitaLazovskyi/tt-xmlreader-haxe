#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_com_theproductengine_scrollbar_ScrollBarH
#include <com/theproductengine/scrollbar/ScrollBarH.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6ae72151139bf69f_55_new,"com.theproductengine.scrollbar.ScrollBarH","new",0xa2a191fd,"com.theproductengine.scrollbar.ScrollBarH.new","com/theproductengine/scrollbar/ScrollBarH.hx",55,0x593abc92)
HX_DEFINE_STACK_FRAME(_hx_pos_6ae72151139bf69f_59_new,"com.theproductengine.scrollbar.ScrollBarH","new",0xa2a191fd,"com.theproductengine.scrollbar.ScrollBarH.new","com/theproductengine/scrollbar/ScrollBarH.hx",59,0x593abc92)
HX_DEFINE_STACK_FRAME(_hx_pos_6ae72151139bf69f_12_new,"com.theproductengine.scrollbar.ScrollBarH","new",0xa2a191fd,"com.theproductengine.scrollbar.ScrollBarH.new","com/theproductengine/scrollbar/ScrollBarH.hx",12,0x593abc92)
HX_LOCAL_STACK_FRAME(_hx_pos_6ae72151139bf69f_67_startDragging,"com.theproductengine.scrollbar.ScrollBarH","startDragging",0x5818672e,"com.theproductengine.scrollbar.ScrollBarH.startDragging","com/theproductengine/scrollbar/ScrollBarH.hx",67,0x593abc92)
HX_LOCAL_STACK_FRAME(_hx_pos_6ae72151139bf69f_74_stopDragging,"com.theproductengine.scrollbar.ScrollBarH","stopDragging",0xe70a5db4,"com.theproductengine.scrollbar.ScrollBarH.stopDragging","com/theproductengine/scrollbar/ScrollBarH.hx",74,0x593abc92)
HX_LOCAL_STACK_FRAME(_hx_pos_6ae72151139bf69f_79_dragBar,"com.theproductengine.scrollbar.ScrollBarH","dragBar",0xf9e2825c,"com.theproductengine.scrollbar.ScrollBarH.dragBar","com/theproductengine/scrollbar/ScrollBarH.hx",79,0x593abc92)
HX_LOCAL_STACK_FRAME(_hx_pos_6ae72151139bf69f_89_getRectOuter,"com.theproductengine.scrollbar.ScrollBarH","getRectOuter",0x0e64f804,"com.theproductengine.scrollbar.ScrollBarH.getRectOuter","com/theproductengine/scrollbar/ScrollBarH.hx",89,0x593abc92)
HX_LOCAL_STACK_FRAME(_hx_pos_6ae72151139bf69f_94_getRectInner,"com.theproductengine.scrollbar.ScrollBarH","getRectInner",0x9558711f,"com.theproductengine.scrollbar.ScrollBarH.getRectInner","com/theproductengine/scrollbar/ScrollBarH.hx",94,0x593abc92)
namespace com{
namespace theproductengine{
namespace scrollbar{

void ScrollBarH_obj::__construct( ::openfl::text::TextField txtFld,int scrollButton){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::com::theproductengine::scrollbar::ScrollBarH,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_6ae72151139bf69f_55_new)
HXLINE(  55)			_gthis->startDragging(event);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::com::theproductengine::scrollbar::ScrollBarH,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_6ae72151139bf69f_59_new)
HXLINE(  59)			_gthis->stopDragging(event);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_6ae72151139bf69f_12_new)
HXLINE(  29)		this->scrollK = 100;
HXLINE(  32)		 ::com::theproductengine::scrollbar::ScrollBarH _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  33)		this->scrollButton = scrollButton;
HXLINE(  34)		this->txtFld = txtFld;
HXLINE(  35)		this->parent = txtFld->parent;
HXLINE(  36)		this->rectOuterH =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  37)		 ::openfl::display::Graphics _hx_tmp = this->rectOuterH->get_graphics();
HXDLIN(  37)		_hx_tmp->beginFill(txtFld->get_backgroundColor(),null());
HXLINE(  38)		 ::openfl::display::Graphics _hx_tmp1 = this->rectOuterH->get_graphics();
HXDLIN(  38)		_hx_tmp1->lineStyle(1,txtFld->get_borderColor(),null(),null(),null(),null(),null(),null());
HXLINE(  39)		 ::openfl::display::Graphics _hx_tmp2 = this->rectOuterH->get_graphics();
HXDLIN(  39)		Float _hx_tmp3 = txtFld->get_x();
HXDLIN(  39)		Float _hx_tmp4 = txtFld->get_y();
HXDLIN(  39)		Float _hx_tmp5 = (_hx_tmp4 + txtFld->get_height());
HXDLIN(  39)		_hx_tmp2->drawRect(_hx_tmp3,_hx_tmp5,txtFld->get_width(),( (Float)(scrollButton) ));
HXLINE(  40)		this->rectOuterH->get_graphics()->endFill();
HXLINE(  41)		this->parent->addChild(this->rectOuterH);
HXLINE(  42)		this->indexOutRect = this->parent->getChildIndex(this->rectOuterH);
HXLINE(  44)		this->rectInnerBoxH =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  45)		 ::openfl::display::Graphics _hx_tmp6 = this->rectInnerBoxH->get_graphics();
HXDLIN(  45)		_hx_tmp6->beginFill((txtFld->get_backgroundColor() + 11184810),null());
HXLINE(  46)		 ::openfl::display::Graphics _hx_tmp7 = this->rectOuterH->get_graphics();
HXDLIN(  46)		_hx_tmp7->lineStyle(1,txtFld->get_borderColor(),null(),null(),null(),null(),null(),null());
HXLINE(  47)		 ::openfl::display::Graphics _hx_tmp8 = this->rectInnerBoxH->get_graphics();
HXDLIN(  47)		Float _hx_tmp9 = txtFld->get_x();
HXDLIN(  47)		Float _hx_tmp10 = txtFld->get_y();
HXDLIN(  47)		Float _hx_tmp11 = (_hx_tmp10 + txtFld->get_height());
HXDLIN(  47)		Float _hx_tmp12 = txtFld->get_width();
HXDLIN(  47)		int _hx_tmp13 = txtFld->get_maxScrollH();
HXDLIN(  47)		_hx_tmp8->drawRect(_hx_tmp9,_hx_tmp11,(_hx_tmp12 / (( (Float)(_hx_tmp13) ) / ( (Float)(this->scrollK) ))),( (Float)(scrollButton) ));
HXLINE(  48)		this->rectInnerBoxH->get_graphics()->endFill();
HXLINE(  50)		this->xLeftLimit = (( (Float)(0) ) * this->rectInnerBoxH->get_width());
HXLINE(  51)		int _hx_tmp14 = txtFld->get_maxScrollH();
HXDLIN(  51)		Float _hx_tmp15 = this->rectInnerBoxH->get_width();
HXDLIN(  51)		Float _hx_tmp16 = (( (Float)(_hx_tmp14) ) * (_hx_tmp15 / ( (Float)(this->scrollK) )));
HXDLIN(  51)		this->xRightLimit = (_hx_tmp16 - this->rectInnerBoxH->get_width());
HXLINE(  53)		this->rectInnerBoxH->addEventListener(HX_("mouseDown",27,b1,c2,ee), ::Dynamic(new _hx_Closure_0(_gthis)),null(),null(),null());
HXLINE(  57)		this->rectInnerBoxH->addEventListener(HX_("mouseUp",e0,f3,72,c0), ::Dynamic(new _hx_Closure_1(_gthis)),null(),null(),null());
HXLINE(  61)		this->parent->addChild(this->rectInnerBoxH);
HXLINE(  62)		this->indexInRect = this->parent->getChildIndex(this->rectInnerBoxH);
            	}

Dynamic ScrollBarH_obj::__CreateEmpty() { return new ScrollBarH_obj; }

void *ScrollBarH_obj::_hx_vtable = 0;

Dynamic ScrollBarH_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollBarH_obj > _hx_result = new ScrollBarH_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ScrollBarH_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7cfbe6d7;
}

void ScrollBarH_obj::startDragging( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_6ae72151139bf69f_67_startDragging)
HXLINE(  68)		Float event1 = event->stageX;
HXDLIN(  68)		this->offsetX = (event1 - this->rectInnerBoxH->get_x());
HXLINE(  69)		this->parent->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->dragBar_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollBarH_obj,startDragging,(void))

void ScrollBarH_obj::stopDragging( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_6ae72151139bf69f_74_stopDragging)
HXDLIN(  74)		this->parent->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->dragBar_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollBarH_obj,stopDragging,(void))

void ScrollBarH_obj::dragBar( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_6ae72151139bf69f_79_dragBar)
HXDLIN(  79)		bool _hx_tmp;
HXDLIN(  79)		if (((event->stageX - this->offsetX) > this->xLeftLimit)) {
HXDLIN(  79)			_hx_tmp = ((event->stageX - this->offsetX) < this->xRightLimit);
            		}
            		else {
HXDLIN(  79)			_hx_tmp = false;
            		}
HXDLIN(  79)		if (_hx_tmp) {
HXLINE(  81)			this->rectInnerBoxH->set_x((event->stageX - this->offsetX));
HXLINE(  82)			 ::openfl::text::TextField _hx_tmp = this->txtFld;
HXDLIN(  82)			Float _hx_tmp1 = this->rectInnerBoxH->get_x();
HXDLIN(  82)			Float _hx_tmp2 = (_hx_tmp1 - this->offsetX);
HXDLIN(  82)			Float _hx_tmp3 = this->txtFld->get_width();
HXDLIN(  82)			Float _hx_tmp4 = (_hx_tmp2 / (_hx_tmp3 / ( (Float)(this->txtFld->get_maxScrollH()) )));
HXDLIN(  82)			_hx_tmp->set_scrollH(::Math_obj::round(((_hx_tmp4 + this->offsetX) * ((Float)1.1))));
HXLINE(  83)			event->updateAfterEvent();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollBarH_obj,dragBar,(void))

 ::openfl::display::Sprite ScrollBarH_obj::getRectOuter(){
            	HX_STACKFRAME(&_hx_pos_6ae72151139bf69f_89_getRectOuter)
HXDLIN(  89)		return this->rectOuterH;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollBarH_obj,getRectOuter,return )

 ::openfl::display::Sprite ScrollBarH_obj::getRectInner(){
            	HX_STACKFRAME(&_hx_pos_6ae72151139bf69f_94_getRectInner)
HXDLIN(  94)		return this->rectInnerBoxH;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollBarH_obj,getRectInner,return )


::hx::ObjectPtr< ScrollBarH_obj > ScrollBarH_obj::__new( ::openfl::text::TextField txtFld,int scrollButton) {
	::hx::ObjectPtr< ScrollBarH_obj > __this = new ScrollBarH_obj();
	__this->__construct(txtFld,scrollButton);
	return __this;
}

::hx::ObjectPtr< ScrollBarH_obj > ScrollBarH_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::text::TextField txtFld,int scrollButton) {
	ScrollBarH_obj *__this = (ScrollBarH_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollBarH_obj), true, "com.theproductengine.scrollbar.ScrollBarH"));
	*(void **)__this = ScrollBarH_obj::_hx_vtable;
	__this->__construct(txtFld,scrollButton);
	return __this;
}

ScrollBarH_obj::ScrollBarH_obj()
{
}

void ScrollBarH_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollBarH);
	HX_MARK_MEMBER_NAME(txtFld,"txtFld");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(scrollButton,"scrollButton");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(xLeftLimit,"xLeftLimit");
	HX_MARK_MEMBER_NAME(xRightLimit,"xRightLimit");
	HX_MARK_MEMBER_NAME(rectInnerBoxH,"rectInnerBoxH");
	HX_MARK_MEMBER_NAME(rectOuterH,"rectOuterH");
	HX_MARK_MEMBER_NAME(indexOutRect,"indexOutRect");
	HX_MARK_MEMBER_NAME(indexInRect,"indexInRect");
	HX_MARK_MEMBER_NAME(scrollK,"scrollK");
	HX_MARK_END_CLASS();
}

void ScrollBarH_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(txtFld,"txtFld");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(scrollButton,"scrollButton");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(xLeftLimit,"xLeftLimit");
	HX_VISIT_MEMBER_NAME(xRightLimit,"xRightLimit");
	HX_VISIT_MEMBER_NAME(rectInnerBoxH,"rectInnerBoxH");
	HX_VISIT_MEMBER_NAME(rectOuterH,"rectOuterH");
	HX_VISIT_MEMBER_NAME(indexOutRect,"indexOutRect");
	HX_VISIT_MEMBER_NAME(indexInRect,"indexInRect");
	HX_VISIT_MEMBER_NAME(scrollK,"scrollK");
}

::hx::Val ScrollBarH_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"txtFld") ) { return ::hx::Val( txtFld ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"scrollK") ) { return ::hx::Val( scrollK ); }
		if (HX_FIELD_EQ(inName,"dragBar") ) { return ::hx::Val( dragBar_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"xLeftLimit") ) { return ::hx::Val( xLeftLimit ); }
		if (HX_FIELD_EQ(inName,"rectOuterH") ) { return ::hx::Val( rectOuterH ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"xRightLimit") ) { return ::hx::Val( xRightLimit ); }
		if (HX_FIELD_EQ(inName,"indexInRect") ) { return ::hx::Val( indexInRect ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollButton") ) { return ::hx::Val( scrollButton ); }
		if (HX_FIELD_EQ(inName,"indexOutRect") ) { return ::hx::Val( indexOutRect ); }
		if (HX_FIELD_EQ(inName,"stopDragging") ) { return ::hx::Val( stopDragging_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRectOuter") ) { return ::hx::Val( getRectOuter_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRectInner") ) { return ::hx::Val( getRectInner_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rectInnerBoxH") ) { return ::hx::Val( rectInnerBoxH ); }
		if (HX_FIELD_EQ(inName,"startDragging") ) { return ::hx::Val( startDragging_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScrollBarH_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"txtFld") ) { txtFld=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::openfl::display::DisplayObjectContainer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollK") ) { scrollK=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"xLeftLimit") ) { xLeftLimit=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rectOuterH") ) { rectOuterH=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"xRightLimit") ) { xRightLimit=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexInRect") ) { indexInRect=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollButton") ) { scrollButton=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexOutRect") ) { indexOutRect=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rectInnerBoxH") ) { rectInnerBoxH=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollBarH_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("txtFld",ce,b3,5d,c6));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("scrollButton",df,b5,a2,31));
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("xLeftLimit",1c,1e,9c,4e));
	outFields->push(HX_("xRightLimit",57,50,b9,d6));
	outFields->push(HX_("rectInnerBoxH",cf,3a,6b,c2));
	outFields->push(HX_("rectOuterH",b1,e7,b0,11));
	outFields->push(HX_("indexOutRect",e0,6b,ed,1a));
	outFields->push(HX_("indexInRect",5b,d4,1e,ad));
	outFields->push(HX_("scrollK",9e,33,d8,30));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScrollBarH_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(ScrollBarH_obj,txtFld),HX_("txtFld",ce,b3,5d,c6)},
	{::hx::fsObject /*  ::openfl::display::DisplayObjectContainer */ ,(int)offsetof(ScrollBarH_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsInt,(int)offsetof(ScrollBarH_obj,scrollButton),HX_("scrollButton",df,b5,a2,31)},
	{::hx::fsFloat,(int)offsetof(ScrollBarH_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(ScrollBarH_obj,xLeftLimit),HX_("xLeftLimit",1c,1e,9c,4e)},
	{::hx::fsFloat,(int)offsetof(ScrollBarH_obj,xRightLimit),HX_("xRightLimit",57,50,b9,d6)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(ScrollBarH_obj,rectInnerBoxH),HX_("rectInnerBoxH",cf,3a,6b,c2)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(ScrollBarH_obj,rectOuterH),HX_("rectOuterH",b1,e7,b0,11)},
	{::hx::fsInt,(int)offsetof(ScrollBarH_obj,indexOutRect),HX_("indexOutRect",e0,6b,ed,1a)},
	{::hx::fsInt,(int)offsetof(ScrollBarH_obj,indexInRect),HX_("indexInRect",5b,d4,1e,ad)},
	{::hx::fsInt,(int)offsetof(ScrollBarH_obj,scrollK),HX_("scrollK",9e,33,d8,30)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScrollBarH_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollBarH_obj_sMemberFields[] = {
	HX_("txtFld",ce,b3,5d,c6),
	HX_("parent",2a,05,7e,ed),
	HX_("scrollButton",df,b5,a2,31),
	HX_("offsetX",65,09,65,d7),
	HX_("xLeftLimit",1c,1e,9c,4e),
	HX_("xRightLimit",57,50,b9,d6),
	HX_("rectInnerBoxH",cf,3a,6b,c2),
	HX_("rectOuterH",b1,e7,b0,11),
	HX_("indexOutRect",e0,6b,ed,1a),
	HX_("indexInRect",5b,d4,1e,ad),
	HX_("scrollK",9e,33,d8,30),
	HX_("startDragging",51,9f,47,3c),
	HX_("stopDragging",f1,ba,ec,a8),
	HX_("dragBar",3f,2e,37,f1),
	HX_("getRectOuter",41,55,47,d0),
	HX_("getRectInner",5c,ce,3a,57),
	::String(null()) };

::hx::Class ScrollBarH_obj::__mClass;

void ScrollBarH_obj::__register()
{
	ScrollBarH_obj _hx_dummy;
	ScrollBarH_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("com.theproductengine.scrollbar.ScrollBarH",8b,cf,9f,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollBarH_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollBarH_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollBarH_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollBarH_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace theproductengine
} // end namespace scrollbar
