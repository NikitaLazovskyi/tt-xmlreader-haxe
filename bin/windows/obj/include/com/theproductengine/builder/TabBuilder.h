#ifndef INCLUDED_com_theproductengine_builder_TabBuilder
#define INCLUDED_com_theproductengine_builder_TabBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,theproductengine,builder,TabBuilder)
HX_DECLARE_CLASS3(com,theproductengine,interfaces,Cloneable)
HX_DECLARE_CLASS3(com,theproductengine,ui,Tab)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace com{
namespace theproductengine{
namespace builder{


class HXCPP_CLASS_ATTRIBUTES TabBuilder_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TabBuilder_obj OBJ_;
		TabBuilder_obj();

	public:
		enum { _hx_ClassId = 0x751259c0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.theproductengine.builder.TabBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"com.theproductengine.builder.TabBuilder"); }
		static ::hx::ObjectPtr< TabBuilder_obj > __new();
		static ::hx::ObjectPtr< TabBuilder_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabBuilder",66,d1,43,28); }

		Float x;
		Float y;
		Float width;
		Float height;
		 ::openfl::text::TextFormat textFormat;
		::String text;
		bool background;
		int backgroundColor;
		bool border;
		 ::com::theproductengine::builder::TabBuilder setX(Float x);
		::Dynamic setX_dyn();

		 ::com::theproductengine::builder::TabBuilder setY(Float y);
		::Dynamic setY_dyn();

		 ::com::theproductengine::builder::TabBuilder setWidth(Float width);
		::Dynamic setWidth_dyn();

		 ::com::theproductengine::builder::TabBuilder setHeight(Float height);
		::Dynamic setHeight_dyn();

		 ::com::theproductengine::builder::TabBuilder setTextFormat( ::openfl::text::TextFormat textFormat);
		::Dynamic setTextFormat_dyn();

		 ::com::theproductengine::builder::TabBuilder setText(::String text);
		::Dynamic setText_dyn();

		 ::com::theproductengine::builder::TabBuilder setBackground(bool background);
		::Dynamic setBackground_dyn();

		 ::com::theproductengine::builder::TabBuilder setBackgroundColor(int backgroundColor);
		::Dynamic setBackgroundColor_dyn();

		 ::com::theproductengine::builder::TabBuilder setBorder(bool border);
		::Dynamic setBorder_dyn();

		 ::com::theproductengine::ui::Tab build();
		::Dynamic build_dyn();

};

} // end namespace com
} // end namespace theproductengine
} // end namespace builder

#endif /* INCLUDED_com_theproductengine_builder_TabBuilder */ 
