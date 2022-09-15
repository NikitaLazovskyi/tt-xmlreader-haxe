#ifndef INCLUDED_com_theproductengine_model_tabgroup_impl_GreyMinimizedTabGroup
#define INCLUDED_com_theproductengine_model_tabgroup_impl_GreyMinimizedTabGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_theproductengine_model_tabgroup_TabGroupAbstract
#include <com/theproductengine/model/tabgroup/TabGroupAbstract.h>
#endif
HX_DECLARE_CLASS3(com,theproductengine,interfaces,Cloneable)
HX_DECLARE_CLASS3(com,theproductengine,model,TabModel)
HX_DECLARE_CLASS4(com,theproductengine,model,tabgroup,TabGroupAbstract)
HX_DECLARE_CLASS5(com,theproductengine,model,tabgroup,impl,GreyMinimizedTabGroup)
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
namespace impl{


class HXCPP_CLASS_ATTRIBUTES GreyMinimizedTabGroup_obj : public  ::com::theproductengine::model::tabgroup::TabGroupAbstract_obj
{
	public:
		typedef  ::com::theproductengine::model::tabgroup::TabGroupAbstract_obj super;
		typedef GreyMinimizedTabGroup_obj OBJ_;
		GreyMinimizedTabGroup_obj();

	public:
		enum { _hx_ClassId = 0x3c5db25b };

		void __construct(Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,::Array< ::Dynamic> tabModelsData,Float maxWidth);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.theproductengine.model.tabgroup.impl.GreyMinimizedTabGroup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"com.theproductengine.model.tabgroup.impl.GreyMinimizedTabGroup"); }
		static ::hx::ObjectPtr< GreyMinimizedTabGroup_obj > __new(Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,::Array< ::Dynamic> tabModelsData,Float maxWidth);
		static ::hx::ObjectPtr< GreyMinimizedTabGroup_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,::Array< ::Dynamic> tabModelsData,Float maxWidth);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GreyMinimizedTabGroup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GreyMinimizedTabGroup",d1,43,7e,3c); }

		int scrollButton;
		 ::openfl::display::Sprite rectInnerBoxV;
		 ::openfl::display::Sprite rectOuterV;
		 ::openfl::display::Sprite rectInnerBoxH;
		 ::openfl::display::Sprite rectOuterH;
		::Array< ::Dynamic> tabModelsData;
		 ::openfl::text::TextField previousTab;
		int secondaryColor;
		int lineColor;
		void changeTextOfMainTab(::String text, ::openfl::text::TextField field);
		::Dynamic changeTextOfMainTab_dyn();

		void changeColorForTabLater( ::openfl::text::TextField tab);
		::Dynamic changeColorForTabLater_dyn();

};

} // end namespace com
} // end namespace theproductengine
} // end namespace model
} // end namespace tabgroup
} // end namespace impl

#endif /* INCLUDED_com_theproductengine_model_tabgroup_impl_GreyMinimizedTabGroup */ 
