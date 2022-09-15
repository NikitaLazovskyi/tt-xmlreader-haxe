#include <hxcpp.h>

#ifndef INCLUDED_com_theproductengine_factory_TabGroupType
#include <com/theproductengine/factory/TabGroupType.h>
#endif
namespace com{
namespace theproductengine{
namespace factory{

::com::theproductengine::factory::TabGroupType TabGroupType_obj::BLUE_MEDIUM;

::com::theproductengine::factory::TabGroupType TabGroupType_obj::GRAY_MINIMIZED;

bool TabGroupType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BLUE_MEDIUM",ba,ee,f5,e3)) { outValue = TabGroupType_obj::BLUE_MEDIUM; return true; }
	if (inName==HX_("GRAY_MINIMIZED",ca,58,41,54)) { outValue = TabGroupType_obj::GRAY_MINIMIZED; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TabGroupType_obj)

int TabGroupType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BLUE_MEDIUM",ba,ee,f5,e3)) return 0;
	if (inName==HX_("GRAY_MINIMIZED",ca,58,41,54)) return 1;
	return super::__FindIndex(inName);
}

int TabGroupType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BLUE_MEDIUM",ba,ee,f5,e3)) return 0;
	if (inName==HX_("GRAY_MINIMIZED",ca,58,41,54)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val TabGroupType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BLUE_MEDIUM",ba,ee,f5,e3)) return BLUE_MEDIUM;
	if (inName==HX_("GRAY_MINIMIZED",ca,58,41,54)) return GRAY_MINIMIZED;
	return super::__Field(inName,inCallProp);
}

static ::String TabGroupType_obj_sStaticFields[] = {
	HX_("BLUE_MEDIUM",ba,ee,f5,e3),
	HX_("GRAY_MINIMIZED",ca,58,41,54),
	::String(null())
};

::hx::Class TabGroupType_obj::__mClass;

Dynamic __Create_TabGroupType_obj() { return new TabGroupType_obj; }

void TabGroupType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("com.theproductengine.factory.TabGroupType",e9,c8,9f,93), ::hx::TCanCast< TabGroupType_obj >,TabGroupType_obj_sStaticFields,0,
	&__Create_TabGroupType_obj, &__Create,
	&super::__SGetClass(), &CreateTabGroupType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TabGroupType_obj::__GetStatic;
}

void TabGroupType_obj::__boot()
{
BLUE_MEDIUM = ::hx::CreateConstEnum< TabGroupType_obj >(HX_("BLUE_MEDIUM",ba,ee,f5,e3),0);
GRAY_MINIMIZED = ::hx::CreateConstEnum< TabGroupType_obj >(HX_("GRAY_MINIMIZED",ca,58,41,54),1);
}


} // end namespace com
} // end namespace theproductengine
} // end namespace factory
