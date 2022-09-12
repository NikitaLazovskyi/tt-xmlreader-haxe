#ifndef INCLUDED_com_theproductengine_model_TabGroup
#define INCLUDED_com_theproductengine_model_TabGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_theproductengine_factory_TabGroupAbstract
#include <com/theproductengine/factory/TabGroupAbstract.h>
#endif
HX_DECLARE_CLASS3(com,theproductengine,factory,TabGroupAbstract)
HX_DECLARE_CLASS3(com,theproductengine,interfaces,Cloneable)
HX_DECLARE_CLASS3(com,theproductengine,model,TabGroup)
HX_DECLARE_CLASS3(com,theproductengine,ui,Tab)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace com{
namespace theproductengine{
namespace model{


class HXCPP_CLASS_ATTRIBUTES TabGroup_obj : public  ::com::theproductengine::factory::TabGroupAbstract_obj
{
	public:
		typedef  ::com::theproductengine::factory::TabGroupAbstract_obj super;
		typedef TabGroup_obj OBJ_;
		TabGroup_obj();

	public:
		enum { _hx_ClassId = 0x0a8edfba };

		void __construct(Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,int amount,Float maxWidth, ::openfl::text::TextFormat txtFrmt,int backgroundTabColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.theproductengine.model.TabGroup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"com.theproductengine.model.TabGroup"); }
		static ::hx::ObjectPtr< TabGroup_obj > __new(Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,int amount,Float maxWidth, ::openfl::text::TextFormat txtFrmt,int backgroundTabColor);
		static ::hx::ObjectPtr< TabGroup_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float clearence, ::com::theproductengine::ui::Tab tab,int amount,Float maxWidth, ::openfl::text::TextFormat txtFrmt,int backgroundTabColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabGroup_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabGroup",ca,f0,4a,e2); }

};

} // end namespace com
} // end namespace theproductengine
} // end namespace model

#endif /* INCLUDED_com_theproductengine_model_TabGroup */ 
