#ifndef INCLUDED_com_theproductengine_scrollbar_ScrollBarH
#define INCLUDED_com_theproductengine_scrollbar_ScrollBarH

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,theproductengine,scrollbar,ScrollBarH)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace com{
namespace theproductengine{
namespace scrollbar{


class HXCPP_CLASS_ATTRIBUTES ScrollBarH_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ScrollBarH_obj OBJ_;
		ScrollBarH_obj();

	public:
		enum { _hx_ClassId = 0x7cfbe6d7 };

		void __construct( ::openfl::text::TextField txtFld,int scrollButton);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.theproductengine.scrollbar.ScrollBarH")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"com.theproductengine.scrollbar.ScrollBarH"); }
		static ::hx::ObjectPtr< ScrollBarH_obj > __new( ::openfl::text::TextField txtFld,int scrollButton);
		static ::hx::ObjectPtr< ScrollBarH_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::text::TextField txtFld,int scrollButton);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScrollBarH_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScrollBarH",e2,79,81,f5); }

		 ::openfl::text::TextField txtFld;
		 ::openfl::display::DisplayObjectContainer parent;
		int scrollButton;
		Float offsetX;
		Float xLeftLimit;
		Float xRightLimit;
		 ::openfl::display::Sprite rectInnerBoxH;
		 ::openfl::display::Sprite rectOuterH;
		int indexOutRect;
		int indexInRect;
		int scrollK;
		void startDragging( ::openfl::events::MouseEvent event);
		::Dynamic startDragging_dyn();

		void stopDragging( ::openfl::events::MouseEvent event);
		::Dynamic stopDragging_dyn();

		void dragBar( ::openfl::events::MouseEvent event);
		::Dynamic dragBar_dyn();

		 ::openfl::display::Sprite getRectOuter();
		::Dynamic getRectOuter_dyn();

		 ::openfl::display::Sprite getRectInner();
		::Dynamic getRectInner_dyn();

};

} // end namespace com
} // end namespace theproductengine
} // end namespace scrollbar

#endif /* INCLUDED_com_theproductengine_scrollbar_ScrollBarH */ 
