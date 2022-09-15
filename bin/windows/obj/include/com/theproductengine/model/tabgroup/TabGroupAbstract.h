#ifndef INCLUDED_com_theproductengine_model_tabgroup_TabGroupAbstract
#define INCLUDED_com_theproductengine_model_tabgroup_TabGroupAbstract

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,theproductengine,interfaces,Cloneable)
HX_DECLARE_CLASS4(com,theproductengine,model,tabgroup,TabGroupAbstract)
HX_DECLARE_CLASS3(com,theproductengine,ui,Tab)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace com{
namespace theproductengine{
namespace model{
namespace tabgroup{


class HXCPP_CLASS_ATTRIBUTES TabGroupAbstract_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TabGroupAbstract_obj OBJ_;
		TabGroupAbstract_obj();

	public:
		enum { _hx_ClassId = 0x21af29fe };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.theproductengine.model.tabgroup.TabGroupAbstract")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"com.theproductengine.model.tabgroup.TabGroupAbstract"); }

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

		int backgroundTabColor;
		int amount;
		Float x;
		Float y;
		Float clearence;
		Float maxWidth;
		 ::openfl::text::TextField mainTab;
		 ::com::theproductengine::ui::Tab example;
		::Array< ::Dynamic> tabs;
		 ::openfl::display::Sprite mainSprite;
		::Array< ::Dynamic> getTabs();
		::Dynamic getTabs_dyn();

		 ::openfl::text::TextField getMainTextField();
		::Dynamic getMainTextField_dyn();

		void populateArray();
		::Dynamic populateArray_dyn();

		 ::openfl::display::Sprite getMainSprite();
		::Dynamic getMainSprite_dyn();

};

} // end namespace com
} // end namespace theproductengine
} // end namespace model
} // end namespace tabgroup

#endif /* INCLUDED_com_theproductengine_model_tabgroup_TabGroupAbstract */ 
