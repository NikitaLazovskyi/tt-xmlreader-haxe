#ifndef INCLUDED_com_theproductengine_Main
#define INCLUDED_com_theproductengine_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(com,theproductengine,Main)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace com{
namespace theproductengine{


class HXCPP_CLASS_ATTRIBUTES Main_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();

	public:
		enum { _hx_ClassId = 0x07c3d5b2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.theproductengine.Main")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"com.theproductengine.Main"); }
		static ::hx::ObjectPtr< Main_obj > __new();
		static ::hx::ObjectPtr< Main_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Main",59,64,2f,33); }

		 ::openfl::text::TextField previousTab;
		 ::openfl::text::TextField mainTab;
		Float clearence;
		int backgroundTabColor;
		int backgroundThemeColor;
		Float tabWidth;
		Float tabHeight;
		bool backgroundTab;
		bool borderTab;
		 ::openfl::text::TextFormat txtFrmt;
		void changeTextOfMainTab(::String text, ::openfl::text::TextField field);
		::Dynamic changeTextOfMainTab_dyn();

		void changeColorForTabLater( ::openfl::text::TextField tab);
		::Dynamic changeColorForTabLater_dyn();

};

} // end namespace com
} // end namespace theproductengine

#endif /* INCLUDED_com_theproductengine_Main */ 
