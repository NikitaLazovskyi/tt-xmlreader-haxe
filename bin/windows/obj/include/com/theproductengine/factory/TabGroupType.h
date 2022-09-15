#ifndef INCLUDED_com_theproductengine_factory_TabGroupType
#define INCLUDED_com_theproductengine_factory_TabGroupType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,theproductengine,factory,TabGroupType)
namespace com{
namespace theproductengine{
namespace factory{


class TabGroupType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef TabGroupType_obj OBJ_;

	public:
		TabGroupType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("com.theproductengine.factory.TabGroupType",e9,c8,9f,93); }
		::String __ToString() const { return HX_("TabGroupType.",0a,d3,1e,aa) + _hx_tag; }

		static ::com::theproductengine::factory::TabGroupType BLUE_MEDIUM;
		static inline ::com::theproductengine::factory::TabGroupType BLUE_MEDIUM_dyn() { return BLUE_MEDIUM; }
		static ::com::theproductengine::factory::TabGroupType GRAY_MINIMIZED;
		static inline ::com::theproductengine::factory::TabGroupType GRAY_MINIMIZED_dyn() { return GRAY_MINIMIZED; }
};

} // end namespace com
} // end namespace theproductengine
} // end namespace factory

#endif /* INCLUDED_com_theproductengine_factory_TabGroupType */ 
