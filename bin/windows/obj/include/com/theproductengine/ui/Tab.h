#ifndef INCLUDED_com_theproductengine_ui_Tab
#define INCLUDED_com_theproductengine_ui_Tab

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_theproductengine_interfaces_Cloneable
#include <com/theproductengine/interfaces/Cloneable.h>
#endif
HX_DECLARE_CLASS3(com,theproductengine,builder,TabBuilder)
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
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Tab_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tab_obj OBJ_;
		Tab_obj();

	public:
		enum { _hx_ClassId = 0x22604c20 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.theproductengine.ui.Tab")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"com.theproductengine.ui.Tab"); }
		static ::hx::ObjectPtr< Tab_obj > __new();
		static ::hx::ObjectPtr< Tab_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tab_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		 ::Dynamic clone_2aa2127b();
		::String __ToString() const { return HX_("Tab",35,12,40,00); }

		static  ::com::theproductengine::ui::Tab fromTextField( ::openfl::text::TextField textField);
		static ::Dynamic fromTextField_dyn();

		static  ::com::theproductengine::builder::TabBuilder builder();
		static ::Dynamic builder_dyn();

		 ::openfl::text::TextField textfield;
		 ::openfl::text::TextField getTextField();
		::Dynamic getTextField_dyn();

		 ::com::theproductengine::ui::Tab clone();
		::Dynamic clone_dyn();

};

} // end namespace com
} // end namespace theproductengine
} // end namespace ui

#endif /* INCLUDED_com_theproductengine_ui_Tab */ 
