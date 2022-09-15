#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_com_theproductengine_scrollbar_ScrollBarV
#include <com/theproductengine/scrollbar/ScrollBarV.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a12279c102d34f38_50_new,"com.theproductengine.scrollbar.ScrollBarV","new",0xb23db10b,"com.theproductengine.scrollbar.ScrollBarV.new","com/theproductengine/scrollbar/ScrollBarV.hx",50,0x627bb944)
HX_DEFINE_STACK_FRAME(_hx_pos_a12279c102d34f38_54_new,"com.theproductengine.scrollbar.ScrollBarV","new",0xb23db10b,"com.theproductengine.scrollbar.ScrollBarV.new","com/theproductengine/scrollbar/ScrollBarV.hx",54,0x627bb944)
HX_DEFINE_STACK_FRAME(_hx_pos_a12279c102d34f38_60_new,"com.theproductengine.scrollbar.ScrollBarV","new",0xb23db10b,"com.theproductengine.scrollbar.ScrollBarV.new","com/theproductengine/scrollbar/ScrollBarV.hx",60,0x627bb944)
HX_DEFINE_STACK_FRAME(_hx_pos_a12279c102d34f38_27_new,"com.theproductengine.scrollbar.ScrollBarV","new",0xb23db10b,"com.theproductengine.scrollbar.ScrollBarV.new","com/theproductengine/scrollbar/ScrollBarV.hx",27,0x627bb944)
HX_LOCAL_STACK_FRAME(_hx_pos_a12279c102d34f38_65_startDragging,"com.theproductengine.scrollbar.ScrollBarV","startDragging",0x7ddb23bc,"com.theproductengine.scrollbar.ScrollBarV.startDragging","com/theproductengine/scrollbar/ScrollBarV.hx",65,0x627bb944)
HX_LOCAL_STACK_FRAME(_hx_pos_a12279c102d34f38_72_stopDragging,"com.theproductengine.scrollbar.ScrollBarV","stopDragging",0x8c84ece6,"com.theproductengine.scrollbar.ScrollBarV.stopDragging","com/theproductengine/scrollbar/ScrollBarV.hx",72,0x627bb944)
HX_LOCAL_STACK_FRAME(_hx_pos_a12279c102d34f38_77_dragBar,"com.theproductengine.scrollbar.ScrollBarV","dragBar",0x8316406a,"com.theproductengine.scrollbar.ScrollBarV.dragBar","com/theproductengine/scrollbar/ScrollBarV.hx",77,0x627bb944)
HX_LOCAL_STACK_FRAME(_hx_pos_a12279c102d34f38_87_getRectOuter,"com.theproductengine.scrollbar.ScrollBarV","getRectOuter",0xb3df8736,"com.theproductengine.scrollbar.ScrollBarV.getRectOuter","com/theproductengine/scrollbar/ScrollBarV.hx",87,0x627bb944)
HX_LOCAL_STACK_FRAME(_hx_pos_a12279c102d34f38_92_getRectInner,"com.theproductengine.scrollbar.ScrollBarV","getRectInner",0x3ad30051,"com.theproductengine.scrollbar.ScrollBarV.getRectInner","com/theproductengine/scrollbar/ScrollBarV.hx",92,0x627bb944)
namespace com{
namespace theproductengine{
namespace scrollbar{

void ScrollBarV_obj::__construct( ::openfl::text::TextField txtFld,int scrollButton){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::com::theproductengine::scrollbar::ScrollBarV,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_a12279c102d34f38_50_new)
HXLINE(  50)			_gthis->startDragging(event);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::com::theproductengine::scrollbar::ScrollBarV,_gthis) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_a12279c102d34f38_54_new)
HXLINE(  54)			_gthis->stopDragging(event);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::com::theproductengine::scrollbar::ScrollBarV,_gthis, ::openfl::text::TextField,txtFld) HXARGC(1)
            		void _hx_run( ::openfl::events::MouseEvent event){
            			HX_GC_STACKFRAME(&_hx_pos_a12279c102d34f38_60_new)
HXLINE(  60)			 ::openfl::display::Sprite _gthis1 = _gthis->rectInnerBoxV;
HXDLIN(  60)			int _hx_tmp = (txtFld->get_scrollV() - 1);
HXDLIN(  60)			_gthis1->set_y((( (Float)(_hx_tmp) ) * _gthis->rectInnerBoxV->get_height()));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_a12279c102d34f38_27_new)
HXDLIN(  27)		 ::com::theproductengine::scrollbar::ScrollBarV _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  28)		this->scrollButton = scrollButton;
HXLINE(  29)		this->txtFld = txtFld;
HXLINE(  30)		this->parent = txtFld->parent;
HXLINE(  31)		this->rectOuterV =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  32)		 ::openfl::display::Graphics _hx_tmp = this->rectOuterV->get_graphics();
HXDLIN(  32)		_hx_tmp->beginFill(txtFld->get_backgroundColor(),null());
HXLINE(  33)		 ::openfl::display::Graphics _hx_tmp1 = this->rectOuterV->get_graphics();
HXDLIN(  33)		_hx_tmp1->lineStyle(1,txtFld->get_borderColor(),null(),null(),null(),null(),null(),null());
HXLINE(  34)		 ::openfl::display::Graphics _hx_tmp2 = this->rectOuterV->get_graphics();
HXDLIN(  34)		Float _hx_tmp3 = txtFld->get_x();
HXDLIN(  34)		Float _hx_tmp4 = (_hx_tmp3 + txtFld->get_width());
HXDLIN(  34)		Float _hx_tmp5 = txtFld->get_y();
HXDLIN(  34)		_hx_tmp2->drawRect(_hx_tmp4,_hx_tmp5,( (Float)(scrollButton) ),txtFld->get_height());
HXLINE(  35)		this->rectOuterV->get_graphics()->endFill();
HXLINE(  36)		this->parent->addChild(this->rectOuterV);
HXLINE(  37)		this->indexOutRect = this->parent->getChildIndex(this->rectOuterV);
HXLINE(  39)		this->rectInnerBoxV =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  40)		 ::openfl::display::Graphics _hx_tmp6 = this->rectInnerBoxV->get_graphics();
HXDLIN(  40)		_hx_tmp6->beginFill((txtFld->get_backgroundColor() + 11184810),null());
HXLINE(  41)		 ::openfl::display::Graphics _hx_tmp7 = this->rectOuterV->get_graphics();
HXDLIN(  41)		_hx_tmp7->lineStyle(1,txtFld->get_borderColor(),null(),null(),null(),null(),null(),null());
HXLINE(  42)		 ::openfl::display::Graphics _hx_tmp8 = this->rectInnerBoxV->get_graphics();
HXDLIN(  42)		Float _hx_tmp9 = txtFld->get_x();
HXDLIN(  42)		Float _hx_tmp10 = (_hx_tmp9 + txtFld->get_width());
HXDLIN(  42)		Float _hx_tmp11 = txtFld->get_y();
HXDLIN(  42)		Float _hx_tmp12 = txtFld->get_height();
HXDLIN(  42)		_hx_tmp8->drawRect(_hx_tmp10,_hx_tmp11,( (Float)(scrollButton) ),(_hx_tmp12 / ( (Float)(txtFld->get_maxScrollV()) )));
HXLINE(  43)		this->rectInnerBoxV->get_graphics()->endFill();
HXLINE(  45)		this->yTopLimit = (( (Float)(0) ) * this->rectInnerBoxV->get_height());
HXLINE(  46)		int _hx_tmp13 = txtFld->get_maxScrollV();
HXDLIN(  46)		Float _hx_tmp14 = (( (Float)(_hx_tmp13) ) * this->rectInnerBoxV->get_height());
HXDLIN(  46)		this->yBottomLimit = (_hx_tmp14 - this->rectInnerBoxV->get_height());
HXLINE(  48)		this->rectInnerBoxV->addEventListener(HX_("mouseDown",27,b1,c2,ee), ::Dynamic(new _hx_Closure_0(_gthis)),null(),null(),null());
HXLINE(  52)		this->rectInnerBoxV->addEventListener(HX_("mouseUp",e0,f3,72,c0), ::Dynamic(new _hx_Closure_1(_gthis)),null(),null(),null());
HXLINE(  56)		this->parent->addChild(this->rectInnerBoxV);
HXLINE(  57)		this->indexInRect = this->parent->getChildIndex(this->rectInnerBoxV);
HXLINE(  58)		txtFld->addEventListener(HX_("mouseWheel",36,28,87,e7), ::Dynamic(new _hx_Closure_2(_gthis,txtFld)),null(),null(),null());
            	}

Dynamic ScrollBarV_obj::__CreateEmpty() { return new ScrollBarV_obj; }

void *ScrollBarV_obj::_hx_vtable = 0;

Dynamic ScrollBarV_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollBarV_obj > _hx_result = new ScrollBarV_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ScrollBarV_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7cfbe6e5;
}

void ScrollBarV_obj::startDragging( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_a12279c102d34f38_65_startDragging)
HXLINE(  66)		Float event1 = event->stageY;
HXDLIN(  66)		this->offsetY = (event1 - this->rectInnerBoxV->get_y());
HXLINE(  67)		this->parent->addEventListener(HX_("mouseMove",d6,9b,b5,f4),this->dragBar_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollBarV_obj,startDragging,(void))

void ScrollBarV_obj::stopDragging( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_a12279c102d34f38_72_stopDragging)
HXDLIN(  72)		this->parent->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),this->dragBar_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollBarV_obj,stopDragging,(void))

void ScrollBarV_obj::dragBar( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_a12279c102d34f38_77_dragBar)
HXDLIN(  77)		bool _hx_tmp;
HXDLIN(  77)		if (((event->stageY - this->offsetY) > this->yTopLimit)) {
HXDLIN(  77)			_hx_tmp = ((event->stageY - this->offsetY) < this->yBottomLimit);
            		}
            		else {
HXDLIN(  77)			_hx_tmp = false;
            		}
HXDLIN(  77)		if (_hx_tmp) {
HXLINE(  79)			this->rectInnerBoxV->set_y((event->stageY - this->offsetY));
HXLINE(  80)			 ::openfl::text::TextField _hx_tmp = this->txtFld;
HXDLIN(  80)			Float _hx_tmp1 = this->rectInnerBoxV->get_y();
HXDLIN(  80)			_hx_tmp->set_scrollV(::Math_obj::round(((_hx_tmp1 / this->rectInnerBoxV->get_height()) + 1)));
HXLINE(  81)			event->updateAfterEvent();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollBarV_obj,dragBar,(void))

 ::openfl::display::Sprite ScrollBarV_obj::getRectOuter(){
            	HX_STACKFRAME(&_hx_pos_a12279c102d34f38_87_getRectOuter)
HXDLIN(  87)		return this->rectOuterV;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollBarV_obj,getRectOuter,return )

 ::openfl::display::Sprite ScrollBarV_obj::getRectInner(){
            	HX_STACKFRAME(&_hx_pos_a12279c102d34f38_92_getRectInner)
HXDLIN(  92)		return this->rectInnerBoxV;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollBarV_obj,getRectInner,return )


::hx::ObjectPtr< ScrollBarV_obj > ScrollBarV_obj::__new( ::openfl::text::TextField txtFld,int scrollButton) {
	::hx::ObjectPtr< ScrollBarV_obj > __this = new ScrollBarV_obj();
	__this->__construct(txtFld,scrollButton);
	return __this;
}

::hx::ObjectPtr< ScrollBarV_obj > ScrollBarV_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::text::TextField txtFld,int scrollButton) {
	ScrollBarV_obj *__this = (ScrollBarV_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollBarV_obj), true, "com.theproductengine.scrollbar.ScrollBarV"));
	*(void **)__this = ScrollBarV_obj::_hx_vtable;
	__this->__construct(txtFld,scrollButton);
	return __this;
}

ScrollBarV_obj::ScrollBarV_obj()
{
}

void ScrollBarV_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollBarV);
	HX_MARK_MEMBER_NAME(txtFld,"txtFld");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(scrollButton,"scrollButton");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(yTopLimit,"yTopLimit");
	HX_MARK_MEMBER_NAME(yBottomLimit,"yBottomLimit");
	HX_MARK_MEMBER_NAME(rectInnerBoxV,"rectInnerBoxV");
	HX_MARK_MEMBER_NAME(rectOuterV,"rectOuterV");
	HX_MARK_MEMBER_NAME(indexOutRect,"indexOutRect");
	HX_MARK_MEMBER_NAME(indexInRect,"indexInRect");
	HX_MARK_END_CLASS();
}

void ScrollBarV_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(txtFld,"txtFld");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(scrollButton,"scrollButton");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(yTopLimit,"yTopLimit");
	HX_VISIT_MEMBER_NAME(yBottomLimit,"yBottomLimit");
	HX_VISIT_MEMBER_NAME(rectInnerBoxV,"rectInnerBoxV");
	HX_VISIT_MEMBER_NAME(rectOuterV,"rectOuterV");
	HX_VISIT_MEMBER_NAME(indexOutRect,"indexOutRect");
	HX_VISIT_MEMBER_NAME(indexInRect,"indexInRect");
}

::hx::Val ScrollBarV_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"txtFld") ) { return ::hx::Val( txtFld ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		if (HX_FIELD_EQ(inName,"dragBar") ) { return ::hx::Val( dragBar_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"yTopLimit") ) { return ::hx::Val( yTopLimit ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rectOuterV") ) { return ::hx::Val( rectOuterV ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexInRect") ) { return ::hx::Val( indexInRect ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollButton") ) { return ::hx::Val( scrollButton ); }
		if (HX_FIELD_EQ(inName,"yBottomLimit") ) { return ::hx::Val( yBottomLimit ); }
		if (HX_FIELD_EQ(inName,"indexOutRect") ) { return ::hx::Val( indexOutRect ); }
		if (HX_FIELD_EQ(inName,"stopDragging") ) { return ::hx::Val( stopDragging_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRectOuter") ) { return ::hx::Val( getRectOuter_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRectInner") ) { return ::hx::Val( getRectInner_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rectInnerBoxV") ) { return ::hx::Val( rectInnerBoxV ); }
		if (HX_FIELD_EQ(inName,"startDragging") ) { return ::hx::Val( startDragging_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScrollBarV_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"txtFld") ) { txtFld=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::openfl::display::DisplayObjectContainer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"yTopLimit") ) { yTopLimit=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rectOuterV") ) { rectOuterV=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexInRect") ) { indexInRect=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollButton") ) { scrollButton=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yBottomLimit") ) { yBottomLimit=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexOutRect") ) { indexOutRect=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rectInnerBoxV") ) { rectInnerBoxV=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollBarV_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("txtFld",ce,b3,5d,c6));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("scrollButton",df,b5,a2,31));
	outFields->push(HX_("offsetY",66,09,65,d7));
	outFields->push(HX_("yTopLimit",ff,89,9d,50));
	outFields->push(HX_("yBottomLimit",57,1c,3f,d2));
	outFields->push(HX_("rectInnerBoxV",dd,3a,6b,c2));
	outFields->push(HX_("rectOuterV",bf,e7,b0,11));
	outFields->push(HX_("indexOutRect",e0,6b,ed,1a));
	outFields->push(HX_("indexInRect",5b,d4,1e,ad));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScrollBarV_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(ScrollBarV_obj,txtFld),HX_("txtFld",ce,b3,5d,c6)},
	{::hx::fsObject /*  ::openfl::display::DisplayObjectContainer */ ,(int)offsetof(ScrollBarV_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsInt,(int)offsetof(ScrollBarV_obj,scrollButton),HX_("scrollButton",df,b5,a2,31)},
	{::hx::fsFloat,(int)offsetof(ScrollBarV_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(ScrollBarV_obj,yTopLimit),HX_("yTopLimit",ff,89,9d,50)},
	{::hx::fsFloat,(int)offsetof(ScrollBarV_obj,yBottomLimit),HX_("yBottomLimit",57,1c,3f,d2)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(ScrollBarV_obj,rectInnerBoxV),HX_("rectInnerBoxV",dd,3a,6b,c2)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(ScrollBarV_obj,rectOuterV),HX_("rectOuterV",bf,e7,b0,11)},
	{::hx::fsInt,(int)offsetof(ScrollBarV_obj,indexOutRect),HX_("indexOutRect",e0,6b,ed,1a)},
	{::hx::fsInt,(int)offsetof(ScrollBarV_obj,indexInRect),HX_("indexInRect",5b,d4,1e,ad)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScrollBarV_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollBarV_obj_sMemberFields[] = {
	HX_("txtFld",ce,b3,5d,c6),
	HX_("parent",2a,05,7e,ed),
	HX_("scrollButton",df,b5,a2,31),
	HX_("offsetY",66,09,65,d7),
	HX_("yTopLimit",ff,89,9d,50),
	HX_("yBottomLimit",57,1c,3f,d2),
	HX_("rectInnerBoxV",dd,3a,6b,c2),
	HX_("rectOuterV",bf,e7,b0,11),
	HX_("indexOutRect",e0,6b,ed,1a),
	HX_("indexInRect",5b,d4,1e,ad),
	HX_("startDragging",51,9f,47,3c),
	HX_("stopDragging",f1,ba,ec,a8),
	HX_("dragBar",3f,2e,37,f1),
	HX_("getRectOuter",41,55,47,d0),
	HX_("getRectInner",5c,ce,3a,57),
	::String(null()) };

::hx::Class ScrollBarV_obj::__mClass;

void ScrollBarV_obj::__register()
{
	ScrollBarV_obj _hx_dummy;
	ScrollBarV_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("com.theproductengine.scrollbar.ScrollBarV",99,cf,9f,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollBarV_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollBarV_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollBarV_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollBarV_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace theproductengine
} // end namespace scrollbar
