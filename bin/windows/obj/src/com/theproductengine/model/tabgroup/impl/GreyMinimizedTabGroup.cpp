#include <hxcpp.h>

#ifndef INCLUDED_com_theproductengine_interfaces_Cloneable
#include <com/theproductengine/interfaces/Cloneable.h>
#endif
#ifndef INCLUDED_com_theproductengine_model_TabModel
#include <com/theproductengine/model/TabModel.h>
#endif
#ifndef INCLUDED_com_theproductengine_model_tabgroup_TabGroupAbstract
#include <com/theproductengine/model/tabgroup/TabGroupAbstract.h>
#endif
#ifndef INCLUDED_com_theproductengine_model_tabgroup_impl_GreyMinimizedTabGroup
#include <com/theproductengine/model/tabgroup/impl/GreyMinimizedTabGroup.h>
#endif
#ifndef INCLUDED_com_theproductengine_scrollbar_ScrollBarH
#include <com/theproductengine/scrollbar/ScrollBarH.h>
#endif
#ifndef INCLUDED_com_theproductengine_scrollbar_ScrollBarV
#include <com/theproductengine/scrollbar/ScrollBarV.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_57ab20b95f94bb37_14_new,"com.theproductengine.model.tabgroup.impl.GreyMinimizedTabGroup","new",0x6fc8c353,"com.theproductengine.model.tabgroup.impl.GreyMinimizedTabGroup.new","com/theproductengine/model/tabgroup/impl/GreyMinimizedTabGroup.hx",14,0x927a1d7e)
HX_DEFINE_STACK_FRAME(_hx_pos_57ab20b95f94bb37_72_new,"com.theproductengine.model.tabgroup.impl.GreyMinimizedTabGroup","new",0x6fc8c353,"com.theproductengine.model.tabgroup.impl.GreyMinimizedTabGroup.new","com/theproductengine/model/tabgroup/impl/GreyMinimizedTabGroup.hx",72,0x927a1d7e)
HX_LOCAL_STACK_FRAME(_hx_pos_57ab20b95f94bb37_105_changeTextOfMainTab,"com.theproductengine.model.tabgroup.impl.GreyMinimizedTabGroup","changeTextOfMainTab",0x0ba8a23b,"com.theproductengine.model.tabgroup.impl.GreyMinimizedTabGroup.changeTextOfMainTab","com/theproductengine/model/tabgroup/impl/GreyMinimizedTabGroup.hx",105,0x927a1d7e)
HX_LOCAL_STACK_FRAME(_hx_pos_57ab20b95f94bb37_111_changeColorForTabLater,"com.theproductengine.model.tabgroup.impl.GreyMinimizedTabGroup","changeColorForTabLater",0x247b75fa,"com.theproductengine.model.tabgroup.impl.GreyMinimizedTabGroup.changeColorForTabLater","com/theproductengine/model/tabgroup/impl/GreyMinimizedTabGroup.hx",111,0x927a1d7e)
namespace com{
namespace theproductengine{
namespace model{
namespace tabgroup{
namespace impl{

void GreyMinimizedTabGroup_obj::__construct(Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,::Array< ::Dynamic> tabModelsData,Float maxWidth){
            	HX_GC_STACKFRAME(&_hx_pos_57ab20b95f94bb37_14_new)
HXLINE(  25)		this->lineColor = 65795;
HXLINE(  24)		this->secondaryColor = 13290186;
HXLINE(  17)		this->scrollButton = 10;
HXLINE(  28)		 ::com::theproductengine::model::tabgroup::impl::GreyMinimizedTabGroup _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  29)		this->mainSprite =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  30)		this->tabModelsData = tabModelsData;
HXLINE(  32)		this->backgroundTabColor = 9737364;
HXLINE(  34)		 ::openfl::text::TextFormat txtFrmt =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  35)		txtFrmt->align = 2;
HXLINE(  36)		txtFrmt->size = 20;
HXLINE(  37)		txtFrmt->leftMargin = 30;
HXLINE(  38)		txtFrmt->rightMargin = 30;
HXLINE(  40)		this->amount = tabModelsData->length;
HXLINE(  41)		this->x = x;
HXLINE(  42)		this->y = y;
HXLINE(  43)		this->clearence = clearence;
HXLINE(  44)		this->maxWidth = maxWidth;
HXLINE(  45)		this->example = tab;
HXLINE(  46)		this->tabs = ::Array_obj< ::Dynamic>::__new();
HXLINE(  47)		this->populateArray();
HXLINE(  49)		this->mainTab =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  50)		this->mainTab->set_x(x);
HXLINE(  51)		 ::openfl::text::TextField _hx_tmp = this->mainTab;
HXDLIN(  51)		_hx_tmp->set_y((y + tab->getTextField()->get_height()));
HXLINE(  52)		this->mainTab->set_text(HX_(" ",20,00,00,00));
HXLINE(  53)		this->mainTab->setTextFormat(txtFrmt,null(),null());
HXLINE(  54)		this->mainTab->set_border(true);
HXLINE(  55)		this->mainTab->set_height((maxWidth / ( (Float)(2) )));
HXLINE(  56)		this->mainTab->set_width(maxWidth);
HXLINE(  57)		this->mainTab->set_background(true);
HXLINE(  58)		this->mainTab->set_backgroundColor(this->backgroundTabColor);
HXLINE(  59)		this->mainTab->set_borderColor(this->lineColor);
HXLINE(  60)		this->mainSprite->addChild(this->mainTab);
HXLINE(  62)		int i = 1;
HXLINE(  63)		int iteratorTabs_current = 0;
HXDLIN(  63)		::Array< ::Dynamic> iteratorTabs_array = this->tabs;
HXLINE(  64)		int iteratorData_current = 0;
HXDLIN(  64)		::Array< ::Dynamic> iteratorData_array = tabModelsData;
HXLINE(  65)		while(true){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::com::theproductengine::model::tabgroup::impl::GreyMinimizedTabGroup,_gthis, ::com::theproductengine::model::TabModel,data) HXARGC(1)
            			void _hx_run( ::openfl::events::MouseEvent event){
            				HX_GC_STACKFRAME(&_hx_pos_57ab20b95f94bb37_72_new)
HXLINE(  73)				 ::com::theproductengine::model::tabgroup::impl::GreyMinimizedTabGroup _gthis1 = _gthis;
HXDLIN(  73)				::String _hx_tmp = data->getTabContent();
HXDLIN(  73)				_gthis1->changeTextOfMainTab(_hx_tmp,::hx::TCast<  ::openfl::text::TextField >::cast(event->target));
HXLINE(  74)				bool _hx_tmp1;
HXDLIN(  74)				int _hx_tmp2 = _gthis->mainTab->get_maxScrollV();
HXDLIN(  74)				if ((_hx_tmp2 >= _gthis->mainTab->get_scrollV())) {
HXLINE(  74)					_hx_tmp1 = (_gthis->mainTab->get_maxScrollV() != 1);
            				}
            				else {
HXLINE(  74)					_hx_tmp1 = false;
            				}
HXDLIN(  74)				if (_hx_tmp1) {
HXLINE(  76)					 ::com::theproductengine::scrollbar::ScrollBarV scrollBarV =  ::com::theproductengine::scrollbar::ScrollBarV_obj::__alloc( HX_CTX ,_gthis->mainTab,_gthis->scrollButton);
HXLINE(  77)					_gthis->rectOuterV = scrollBarV->getRectOuter();
HXLINE(  78)					_gthis->rectInnerBoxV = scrollBarV->getRectInner();
            				}
            				else {
HXLINE(  82)					_gthis->mainTab->parent->removeChild(_gthis->rectInnerBoxV);
            				}
HXLINE(  86)				bool _hx_tmp3;
HXDLIN(  86)				int _hx_tmp4 = _gthis->mainTab->get_maxScrollH();
HXDLIN(  86)				if ((_hx_tmp4 >= _gthis->mainTab->get_scrollH())) {
HXLINE(  86)					_hx_tmp3 = (_gthis->mainTab->get_maxScrollH() != 1);
            				}
            				else {
HXLINE(  86)					_hx_tmp3 = false;
            				}
HXDLIN(  86)				if (_hx_tmp3) {
HXLINE(  88)					 ::com::theproductengine::scrollbar::ScrollBarH scrollBarH =  ::com::theproductengine::scrollbar::ScrollBarH_obj::__alloc( HX_CTX ,_gthis->mainTab,_gthis->scrollButton);
HXLINE(  89)					_gthis->rectOuterH = scrollBarH->getRectOuter();
HXLINE(  90)					_gthis->rectInnerBoxH = scrollBarH->getRectInner();
            				}
            				else {
HXLINE(  94)					_gthis->mainTab->parent->removeChild(_gthis->rectInnerBoxH);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  65)			bool _hx_tmp;
HXDLIN(  65)			if ((iteratorTabs_current < iteratorTabs_array->length)) {
HXLINE(  65)				_hx_tmp = (iteratorData_current < iteratorData_array->length);
            			}
            			else {
HXLINE(  65)				_hx_tmp = false;
            			}
HXDLIN(  65)			if (!(_hx_tmp)) {
HXLINE(  65)				goto _hx_goto_0;
            			}
HXLINE(  67)			iteratorData_current = (iteratorData_current + 1);
HXDLIN(  67)			 ::com::theproductengine::model::TabModel data = iteratorData_array->__get((iteratorData_current - 1)).StaticCast<  ::com::theproductengine::model::TabModel >();
HXLINE(  68)			iteratorTabs_current = (iteratorTabs_current + 1);
HXDLIN(  68)			 ::openfl::text::TextField tab = iteratorTabs_array->__get((iteratorTabs_current - 1)).StaticCast<  ::com::theproductengine::ui::Tab >()->getTextField();
HXLINE(  69)			tab->set_text(data->getTabName());
HXLINE(  71)			tab->addEventListener(HX_("click",48,7c,5e,48), ::Dynamic(new _hx_Closure_0(_gthis,data)),null(),null(),null());
HXLINE(  98)			this->mainSprite->addChild(tab);
HXLINE(  99)			i = (i + 1);
            		}
            		_hx_goto_0:;
            	}

Dynamic GreyMinimizedTabGroup_obj::__CreateEmpty() { return new GreyMinimizedTabGroup_obj; }

void *GreyMinimizedTabGroup_obj::_hx_vtable = 0;

Dynamic GreyMinimizedTabGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GreyMinimizedTabGroup_obj > _hx_result = new GreyMinimizedTabGroup_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool GreyMinimizedTabGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21af29fe) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x21af29fe;
	} else {
		return inClassId==(int)0x3c5db25b;
	}
}

void GreyMinimizedTabGroup_obj::changeTextOfMainTab(::String text, ::openfl::text::TextField field){
            	HX_STACKFRAME(&_hx_pos_57ab20b95f94bb37_105_changeTextOfMainTab)
HXLINE( 106)		 ::openfl::text::TextField _hx_tmp = this->mainTab;
HXDLIN( 106)		_hx_tmp->replaceText(0,this->mainTab->get_text().length,text);
HXLINE( 107)		this->changeColorForTabLater(field);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GreyMinimizedTabGroup_obj,changeTextOfMainTab,(void))

void GreyMinimizedTabGroup_obj::changeColorForTabLater( ::openfl::text::TextField tab){
            	HX_STACKFRAME(&_hx_pos_57ab20b95f94bb37_111_changeColorForTabLater)
HXLINE( 112)		tab->set_backgroundColor(this->backgroundTabColor);
HXLINE( 113)		bool _hx_tmp;
HXDLIN( 113)		if (::hx::IsNotNull( this->previousTab )) {
HXLINE( 113)			_hx_tmp = ::hx::IsInstanceNotEq( this->previousTab,tab );
            		}
            		else {
HXLINE( 113)			_hx_tmp = false;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 115)			this->previousTab->set_backgroundColor(this->secondaryColor);
            		}
HXLINE( 117)		this->previousTab = tab;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GreyMinimizedTabGroup_obj,changeColorForTabLater,(void))


::hx::ObjectPtr< GreyMinimizedTabGroup_obj > GreyMinimizedTabGroup_obj::__new(Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,::Array< ::Dynamic> tabModelsData,Float maxWidth) {
	::hx::ObjectPtr< GreyMinimizedTabGroup_obj > __this = new GreyMinimizedTabGroup_obj();
	__this->__construct(x,y,clearence,tab,tabModelsData,maxWidth);
	return __this;
}

::hx::ObjectPtr< GreyMinimizedTabGroup_obj > GreyMinimizedTabGroup_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,::Array< ::Dynamic> tabModelsData,Float maxWidth) {
	GreyMinimizedTabGroup_obj *__this = (GreyMinimizedTabGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GreyMinimizedTabGroup_obj), true, "com.theproductengine.model.tabgroup.impl.GreyMinimizedTabGroup"));
	*(void **)__this = GreyMinimizedTabGroup_obj::_hx_vtable;
	__this->__construct(x,y,clearence,tab,tabModelsData,maxWidth);
	return __this;
}

GreyMinimizedTabGroup_obj::GreyMinimizedTabGroup_obj()
{
}

void GreyMinimizedTabGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GreyMinimizedTabGroup);
	HX_MARK_MEMBER_NAME(scrollButton,"scrollButton");
	HX_MARK_MEMBER_NAME(rectInnerBoxV,"rectInnerBoxV");
	HX_MARK_MEMBER_NAME(rectOuterV,"rectOuterV");
	HX_MARK_MEMBER_NAME(rectInnerBoxH,"rectInnerBoxH");
	HX_MARK_MEMBER_NAME(rectOuterH,"rectOuterH");
	HX_MARK_MEMBER_NAME(tabModelsData,"tabModelsData");
	HX_MARK_MEMBER_NAME(previousTab,"previousTab");
	HX_MARK_MEMBER_NAME(secondaryColor,"secondaryColor");
	HX_MARK_MEMBER_NAME(lineColor,"lineColor");
	 ::com::theproductengine::model::tabgroup::TabGroupAbstract_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GreyMinimizedTabGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scrollButton,"scrollButton");
	HX_VISIT_MEMBER_NAME(rectInnerBoxV,"rectInnerBoxV");
	HX_VISIT_MEMBER_NAME(rectOuterV,"rectOuterV");
	HX_VISIT_MEMBER_NAME(rectInnerBoxH,"rectInnerBoxH");
	HX_VISIT_MEMBER_NAME(rectOuterH,"rectOuterH");
	HX_VISIT_MEMBER_NAME(tabModelsData,"tabModelsData");
	HX_VISIT_MEMBER_NAME(previousTab,"previousTab");
	HX_VISIT_MEMBER_NAME(secondaryColor,"secondaryColor");
	HX_VISIT_MEMBER_NAME(lineColor,"lineColor");
	 ::com::theproductengine::model::tabgroup::TabGroupAbstract_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GreyMinimizedTabGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"lineColor") ) { return ::hx::Val( lineColor ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rectOuterV") ) { return ::hx::Val( rectOuterV ); }
		if (HX_FIELD_EQ(inName,"rectOuterH") ) { return ::hx::Val( rectOuterH ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"previousTab") ) { return ::hx::Val( previousTab ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollButton") ) { return ::hx::Val( scrollButton ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rectInnerBoxV") ) { return ::hx::Val( rectInnerBoxV ); }
		if (HX_FIELD_EQ(inName,"rectInnerBoxH") ) { return ::hx::Val( rectInnerBoxH ); }
		if (HX_FIELD_EQ(inName,"tabModelsData") ) { return ::hx::Val( tabModelsData ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"secondaryColor") ) { return ::hx::Val( secondaryColor ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"changeTextOfMainTab") ) { return ::hx::Val( changeTextOfMainTab_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"changeColorForTabLater") ) { return ::hx::Val( changeColorForTabLater_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GreyMinimizedTabGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"lineColor") ) { lineColor=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rectOuterV") ) { rectOuterV=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rectOuterH") ) { rectOuterH=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"previousTab") ) { previousTab=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollButton") ) { scrollButton=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rectInnerBoxV") ) { rectInnerBoxV=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rectInnerBoxH") ) { rectInnerBoxH=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabModelsData") ) { tabModelsData=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"secondaryColor") ) { secondaryColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GreyMinimizedTabGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("scrollButton",df,b5,a2,31));
	outFields->push(HX_("rectInnerBoxV",dd,3a,6b,c2));
	outFields->push(HX_("rectOuterV",bf,e7,b0,11));
	outFields->push(HX_("rectInnerBoxH",cf,3a,6b,c2));
	outFields->push(HX_("rectOuterH",b1,e7,b0,11));
	outFields->push(HX_("tabModelsData",a9,aa,81,79));
	outFields->push(HX_("previousTab",5e,92,07,b3));
	outFields->push(HX_("secondaryColor",4f,0d,f7,bb));
	outFields->push(HX_("lineColor",cf,74,57,91));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GreyMinimizedTabGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(GreyMinimizedTabGroup_obj,scrollButton),HX_("scrollButton",df,b5,a2,31)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(GreyMinimizedTabGroup_obj,rectInnerBoxV),HX_("rectInnerBoxV",dd,3a,6b,c2)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(GreyMinimizedTabGroup_obj,rectOuterV),HX_("rectOuterV",bf,e7,b0,11)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(GreyMinimizedTabGroup_obj,rectInnerBoxH),HX_("rectInnerBoxH",cf,3a,6b,c2)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(GreyMinimizedTabGroup_obj,rectOuterH),HX_("rectOuterH",b1,e7,b0,11)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(GreyMinimizedTabGroup_obj,tabModelsData),HX_("tabModelsData",a9,aa,81,79)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(GreyMinimizedTabGroup_obj,previousTab),HX_("previousTab",5e,92,07,b3)},
	{::hx::fsInt,(int)offsetof(GreyMinimizedTabGroup_obj,secondaryColor),HX_("secondaryColor",4f,0d,f7,bb)},
	{::hx::fsInt,(int)offsetof(GreyMinimizedTabGroup_obj,lineColor),HX_("lineColor",cf,74,57,91)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GreyMinimizedTabGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String GreyMinimizedTabGroup_obj_sMemberFields[] = {
	HX_("scrollButton",df,b5,a2,31),
	HX_("rectInnerBoxV",dd,3a,6b,c2),
	HX_("rectOuterV",bf,e7,b0,11),
	HX_("rectInnerBoxH",cf,3a,6b,c2),
	HX_("rectOuterH",b1,e7,b0,11),
	HX_("tabModelsData",a9,aa,81,79),
	HX_("previousTab",5e,92,07,b3),
	HX_("secondaryColor",4f,0d,f7,bb),
	HX_("lineColor",cf,74,57,91),
	HX_("changeTextOfMainTab",48,59,3f,aa),
	HX_("changeColorForTabLater",0d,e5,48,46),
	::String(null()) };

::hx::Class GreyMinimizedTabGroup_obj::__mClass;

void GreyMinimizedTabGroup_obj::__register()
{
	GreyMinimizedTabGroup_obj _hx_dummy;
	GreyMinimizedTabGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("com.theproductengine.model.tabgroup.impl.GreyMinimizedTabGroup",e1,1d,12,b4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GreyMinimizedTabGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GreyMinimizedTabGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GreyMinimizedTabGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GreyMinimizedTabGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace theproductengine
} // end namespace model
} // end namespace tabgroup
} // end namespace impl
