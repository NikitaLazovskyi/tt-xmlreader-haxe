#include <hxcpp.h>

#ifndef INCLUDED_com_theproductengine_builder_TabBuilder
#include <com/theproductengine/builder/TabBuilder.h>
#endif
#ifndef INCLUDED_com_theproductengine_factory_TabGroupFactory
#include <com/theproductengine/factory/TabGroupFactory.h>
#endif
#ifndef INCLUDED_com_theproductengine_factory_TabGroupType
#include <com/theproductengine/factory/TabGroupType.h>
#endif
#ifndef INCLUDED_com_theproductengine_interfaces_Cloneable
#include <com/theproductengine/interfaces/Cloneable.h>
#endif
#ifndef INCLUDED_com_theproductengine_model_TabModel
#include <com/theproductengine/model/TabModel.h>
#endif
#ifndef INCLUDED_com_theproductengine_model_tabgroup_TabGroupAbstract
#include <com/theproductengine/model/tabgroup/TabGroupAbstract.h>
#endif
#ifndef INCLUDED_com_theproductengine_model_tabgroup_impl_BlueMediumTabGroup
#include <com/theproductengine/model/tabgroup/impl/BlueMediumTabGroup.h>
#endif
#ifndef INCLUDED_com_theproductengine_model_tabgroup_impl_GreyMinimizedTabGroup
#include <com/theproductengine/model/tabgroup/impl/GreyMinimizedTabGroup.h>
#endif
#ifndef INCLUDED_com_theproductengine_ui_Tab
#include <com/theproductengine/ui/Tab.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6246690d1f27d003_15_new,"com.theproductengine.factory.TabGroupFactory","new",0x1d95c86d,"com.theproductengine.factory.TabGroupFactory.new","com/theproductengine/factory/TabGroupFactory.hx",15,0x3fddfec4)
HX_LOCAL_STACK_FRAME(_hx_pos_6246690d1f27d003_38_getInstance,"com.theproductengine.factory.TabGroupFactory","getInstance",0xda112f58,"com.theproductengine.factory.TabGroupFactory.getInstance","com/theproductengine/factory/TabGroupFactory.hx",38,0x3fddfec4)
namespace com{
namespace theproductengine{
namespace factory{

void TabGroupFactory_obj::__construct(::Array< ::Dynamic> tabModelsData){
            	HX_GC_STACKFRAME(&_hx_pos_6246690d1f27d003_15_new)
HXLINE(  28)		this->txtFrmt =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  27)		this->borderTab = true;
HXLINE(  26)		this->backgroundTab = true;
HXLINE(  25)		this->maxHeight = ((Float)450);
HXLINE(  24)		this->maxWidth = ((Float)750);
HXLINE(  23)		this->tabHeight = ((Float)40);
HXLINE(  22)		this->tabWidth = ((Float)150);
HXLINE(  21)		this->offsetY = ((Float)20);
HXLINE(  20)		this->offsetX = ((Float)20);
HXLINE(  19)		this->backgroundThemeColor = 15329769;
HXLINE(  18)		this->backgroundTabColor = 11652587;
HXLINE(  17)		this->clearence = ((Float)10);
HXLINE(  34)		this->tabModelsData = tabModelsData;
            	}

Dynamic TabGroupFactory_obj::__CreateEmpty() { return new TabGroupFactory_obj; }

void *TabGroupFactory_obj::_hx_vtable = 0;

Dynamic TabGroupFactory_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabGroupFactory_obj > _hx_result = new TabGroupFactory_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TabGroupFactory_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x13c73bf7;
}

 ::com::theproductengine::model::tabgroup::TabGroupAbstract TabGroupFactory_obj::getInstance( ::com::theproductengine::factory::TabGroupType type){
            	HX_GC_STACKFRAME(&_hx_pos_6246690d1f27d003_38_getInstance)
HXLINE(  40)		this->txtFrmt->align = 0;
HXLINE(  41)		this->txtFrmt->size = 20;
HXLINE(  43)		 ::com::theproductengine::ui::Tab example = ::com::theproductengine::ui::Tab_obj::builder()->setBackground(this->backgroundTab)->setBackgroundColor(this->backgroundThemeColor)->setHeight(this->tabHeight)->setWidth(this->tabWidth)->setX(this->offsetX)->setY(this->offsetY)->setTextFormat(this->txtFrmt)->setText(HX_("Tab1",5c,dc,cf,37))->setBorder(this->borderTab)->build();
HXLINE(  55)		switch((int)(type->_hx_getIndex())){
            			case (int)0: {
HXLINE(  58)				return  ::com::theproductengine::model::tabgroup::impl::BlueMediumTabGroup_obj::__alloc( HX_CTX ,this->offsetX,this->offsetY,(this->clearence - ( (Float)(5) )),example,this->tabModelsData,(this->maxWidth - (( (Float)(2) ) * this->clearence)));
            			}
            			break;
            			case (int)1: {
HXLINE(  60)				return  ::com::theproductengine::model::tabgroup::impl::GreyMinimizedTabGroup_obj::__alloc( HX_CTX ,this->offsetX,this->offsetY,(this->clearence - ( (Float)(5) )),example,this->tabModelsData,(this->maxWidth - (( (Float)(2) ) * this->clearence)));
            			}
            			break;
            		}
HXLINE(  55)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabGroupFactory_obj,getInstance,return )


::hx::ObjectPtr< TabGroupFactory_obj > TabGroupFactory_obj::__new(::Array< ::Dynamic> tabModelsData) {
	::hx::ObjectPtr< TabGroupFactory_obj > __this = new TabGroupFactory_obj();
	__this->__construct(tabModelsData);
	return __this;
}

::hx::ObjectPtr< TabGroupFactory_obj > TabGroupFactory_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> tabModelsData) {
	TabGroupFactory_obj *__this = (TabGroupFactory_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabGroupFactory_obj), true, "com.theproductengine.factory.TabGroupFactory"));
	*(void **)__this = TabGroupFactory_obj::_hx_vtable;
	__this->__construct(tabModelsData);
	return __this;
}

TabGroupFactory_obj::TabGroupFactory_obj()
{
}

void TabGroupFactory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabGroupFactory);
	HX_MARK_MEMBER_NAME(clearence,"clearence");
	HX_MARK_MEMBER_NAME(backgroundTabColor,"backgroundTabColor");
	HX_MARK_MEMBER_NAME(backgroundThemeColor,"backgroundThemeColor");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(tabWidth,"tabWidth");
	HX_MARK_MEMBER_NAME(tabHeight,"tabHeight");
	HX_MARK_MEMBER_NAME(maxWidth,"maxWidth");
	HX_MARK_MEMBER_NAME(maxHeight,"maxHeight");
	HX_MARK_MEMBER_NAME(backgroundTab,"backgroundTab");
	HX_MARK_MEMBER_NAME(borderTab,"borderTab");
	HX_MARK_MEMBER_NAME(txtFrmt,"txtFrmt");
	HX_MARK_MEMBER_NAME(tabModelsData,"tabModelsData");
	HX_MARK_END_CLASS();
}

void TabGroupFactory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clearence,"clearence");
	HX_VISIT_MEMBER_NAME(backgroundTabColor,"backgroundTabColor");
	HX_VISIT_MEMBER_NAME(backgroundThemeColor,"backgroundThemeColor");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(tabWidth,"tabWidth");
	HX_VISIT_MEMBER_NAME(tabHeight,"tabHeight");
	HX_VISIT_MEMBER_NAME(maxWidth,"maxWidth");
	HX_VISIT_MEMBER_NAME(maxHeight,"maxHeight");
	HX_VISIT_MEMBER_NAME(backgroundTab,"backgroundTab");
	HX_VISIT_MEMBER_NAME(borderTab,"borderTab");
	HX_VISIT_MEMBER_NAME(txtFrmt,"txtFrmt");
	HX_VISIT_MEMBER_NAME(tabModelsData,"tabModelsData");
}

::hx::Val TabGroupFactory_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		if (HX_FIELD_EQ(inName,"txtFrmt") ) { return ::hx::Val( txtFrmt ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabWidth") ) { return ::hx::Val( tabWidth ); }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { return ::hx::Val( maxWidth ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clearence") ) { return ::hx::Val( clearence ); }
		if (HX_FIELD_EQ(inName,"tabHeight") ) { return ::hx::Val( tabHeight ); }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { return ::hx::Val( maxHeight ); }
		if (HX_FIELD_EQ(inName,"borderTab") ) { return ::hx::Val( borderTab ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return ::hx::Val( getInstance_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"backgroundTab") ) { return ::hx::Val( backgroundTab ); }
		if (HX_FIELD_EQ(inName,"tabModelsData") ) { return ::hx::Val( tabModelsData ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"backgroundTabColor") ) { return ::hx::Val( backgroundTabColor ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"backgroundThemeColor") ) { return ::hx::Val( backgroundThemeColor ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TabGroupFactory_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"txtFrmt") ) { txtFrmt=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabWidth") ) { tabWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { maxWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clearence") ) { clearence=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabHeight") ) { tabHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { maxHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderTab") ) { borderTab=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"backgroundTab") ) { backgroundTab=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabModelsData") ) { tabModelsData=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"backgroundTabColor") ) { backgroundTabColor=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"backgroundThemeColor") ) { backgroundThemeColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabGroupFactory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("clearence",58,17,fe,cb));
	outFields->push(HX_("backgroundTabColor",dc,e0,8a,59));
	outFields->push(HX_("backgroundThemeColor",28,f0,5c,a2));
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	outFields->push(HX_("tabWidth",71,37,07,39));
	outFields->push(HX_("tabHeight",1c,c4,98,63));
	outFields->push(HX_("maxWidth",c2,08,80,74));
	outFields->push(HX_("maxHeight",ab,19,d7,31));
	outFields->push(HX_("backgroundTab",07,27,f1,91));
	outFields->push(HX_("borderTab",c9,a0,9b,80));
	outFields->push(HX_("txtFrmt",43,36,a4,cb));
	outFields->push(HX_("tabModelsData",a9,aa,81,79));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabGroupFactory_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(TabGroupFactory_obj,clearence),HX_("clearence",58,17,fe,cb)},
	{::hx::fsInt,(int)offsetof(TabGroupFactory_obj,backgroundTabColor),HX_("backgroundTabColor",dc,e0,8a,59)},
	{::hx::fsInt,(int)offsetof(TabGroupFactory_obj,backgroundThemeColor),HX_("backgroundThemeColor",28,f0,5c,a2)},
	{::hx::fsFloat,(int)offsetof(TabGroupFactory_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(TabGroupFactory_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(TabGroupFactory_obj,tabWidth),HX_("tabWidth",71,37,07,39)},
	{::hx::fsFloat,(int)offsetof(TabGroupFactory_obj,tabHeight),HX_("tabHeight",1c,c4,98,63)},
	{::hx::fsFloat,(int)offsetof(TabGroupFactory_obj,maxWidth),HX_("maxWidth",c2,08,80,74)},
	{::hx::fsFloat,(int)offsetof(TabGroupFactory_obj,maxHeight),HX_("maxHeight",ab,19,d7,31)},
	{::hx::fsBool,(int)offsetof(TabGroupFactory_obj,backgroundTab),HX_("backgroundTab",07,27,f1,91)},
	{::hx::fsBool,(int)offsetof(TabGroupFactory_obj,borderTab),HX_("borderTab",c9,a0,9b,80)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(TabGroupFactory_obj,txtFrmt),HX_("txtFrmt",43,36,a4,cb)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TabGroupFactory_obj,tabModelsData),HX_("tabModelsData",a9,aa,81,79)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabGroupFactory_obj_sStaticStorageInfo = 0;
#endif

static ::String TabGroupFactory_obj_sMemberFields[] = {
	HX_("clearence",58,17,fe,cb),
	HX_("backgroundTabColor",dc,e0,8a,59),
	HX_("backgroundThemeColor",28,f0,5c,a2),
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("tabWidth",71,37,07,39),
	HX_("tabHeight",1c,c4,98,63),
	HX_("maxWidth",c2,08,80,74),
	HX_("maxHeight",ab,19,d7,31),
	HX_("backgroundTab",07,27,f1,91),
	HX_("borderTab",c9,a0,9b,80),
	HX_("txtFrmt",43,36,a4,cb),
	HX_("tabModelsData",a9,aa,81,79),
	HX_("getInstance",4b,e2,d4,7f),
	::String(null()) };

::hx::Class TabGroupFactory_obj::__mClass;

void TabGroupFactory_obj::__register()
{
	TabGroupFactory_obj _hx_dummy;
	TabGroupFactory_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("com.theproductengine.factory.TabGroupFactory",fb,0d,bc,b5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabGroupFactory_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabGroupFactory_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabGroupFactory_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabGroupFactory_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace theproductengine
} // end namespace factory
