#ifndef INCLUDED_com_theproductengine_builder_TabGroup
#define INCLUDED_com_theproductengine_builder_TabGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,theproductengine,builder,TabGroup)
HX_DECLARE_CLASS3(com,theproductengine,interfaces,Cloneable)
HX_DECLARE_CLASS3(com,theproductengine,ui,Tab)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace com{
namespace theproductengine{
namespace builder{


class HXCPP_CLASS_ATTRIBUTES TabGroup_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TabGroup_obj OBJ_;
		TabGroup_obj();

	public:
		enum { _hx_ClassId = 0x4646b96c };

		void __construct(Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,int amount,Float maxWidth, ::openfl::text::TextFormat txtFrmt,int backgroundTabColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.theproductengine.builder.TabGroup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"com.theproductengine.builder.TabGroup"); }
		static ::hx::ObjectPtr< TabGroup_obj > __new(Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,int amount,Float maxWidth, ::openfl::text::TextFormat txtFrmt,int backgroundTabColor);
		static ::hx::ObjectPtr< TabGroup_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,int amount,Float maxWidth, ::openfl::text::TextFormat txtFrmt,int backgroundTabColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabGroup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabGroup",ca,f0,4a,e2); }

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

		void populateArray();
		::Dynamic populateArray_dyn();

		 ::openfl::text::TextField getMainTextField();
		::Dynamic getMainTextField_dyn();

};

} // end namespace com
} // end namespace theproductengine
} // end namespace builder

#endif /* INCLUDED_com_theproductengine_builder_TabGroup */ 
