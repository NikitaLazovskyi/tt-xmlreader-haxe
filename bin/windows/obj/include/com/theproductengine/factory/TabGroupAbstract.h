#ifndef INCLUDED_com_theproductengine_factory_TabGroupAbstract
#define INCLUDED_com_theproductengine_factory_TabGroupAbstract

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,theproductengine,factory,TabGroupAbstract)
HX_DECLARE_CLASS3(com,theproductengine,interfaces,Cloneable)
HX_DECLARE_CLASS3(com,theproductengine,ui,Tab)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace com{
namespace theproductengine{
namespace factory{


class HXCPP_CLASS_ATTRIBUTES TabGroupAbstract_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TabGroupAbstract_obj OBJ_;
		TabGroupAbstract_obj();

	public:
		enum { _hx_ClassId = 0x7436e279 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.theproductengine.factory.TabGroupAbstract")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"com.theproductengine.factory.TabGroupAbstract"); }

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabGroupAbstract_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabGroupAbstract",cc,47,68,83); }

		 ::openfl::text::TextField mainTab;
		int amount;
		Float x;
		Float y;
		Float clearence;
		Float maxWidth;
		 ::com::theproductengine::ui::Tab example;
		::Array< ::Dynamic> tabs;
		::Array< ::Dynamic> getTabs();
		::Dynamic getTabs_dyn();

		 ::openfl::text::TextField getMainTextField();
		::Dynamic getMainTextField_dyn();

		void populateArray();
		::Dynamic populateArray_dyn();

};

} // end namespace com
} // end namespace theproductengine
} // end namespace factory

#endif /* INCLUDED_com_theproductengine_factory_TabGroupAbstract */ 
