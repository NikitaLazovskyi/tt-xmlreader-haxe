#ifndef INCLUDED_com_theproductengine_factory_TabGroupFactory
#define INCLUDED_com_theproductengine_factory_TabGroupFactory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,theproductengine,factory,TabGroupFactory)
HX_DECLARE_CLASS3(com,theproductengine,factory,TabGroupType)
HX_DECLARE_CLASS3(com,theproductengine,model,TabModel)
HX_DECLARE_CLASS4(com,theproductengine,model,tabgroup,TabGroupAbstract)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace com{
namespace theproductengine{
namespace factory{


class HXCPP_CLASS_ATTRIBUTES TabGroupFactory_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TabGroupFactory_obj OBJ_;
		TabGroupFactory_obj();

	public:
		enum { _hx_ClassId = 0x13c73bf7 };

		void __construct(::Array< ::Dynamic> tabModelsData);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.theproductengine.factory.TabGroupFactory")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"com.theproductengine.factory.TabGroupFactory"); }
		static ::hx::ObjectPtr< TabGroupFactory_obj > __new(::Array< ::Dynamic> tabModelsData);
		static ::hx::ObjectPtr< TabGroupFactory_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> tabModelsData);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabGroupFactory_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabGroupFactory",20,61,ea,3c); }

		Float clearence;
		int backgroundTabColor;
		int backgroundThemeColor;
		Float offsetX;
		Float offsetY;
		Float tabWidth;
		Float tabHeight;
		Float maxWidth;
		Float maxHeight;
		bool backgroundTab;
		bool borderTab;
		 ::openfl::text::TextFormat txtFrmt;
		::Array< ::Dynamic> tabModelsData;
		 ::com::theproductengine::model::tabgroup::TabGroupAbstract getInstance( ::com::theproductengine::factory::TabGroupType type);
		::Dynamic getInstance_dyn();

};

} // end namespace com
} // end namespace theproductengine
} // end namespace factory

#endif /* INCLUDED_com_theproductengine_factory_TabGroupFactory */ 
