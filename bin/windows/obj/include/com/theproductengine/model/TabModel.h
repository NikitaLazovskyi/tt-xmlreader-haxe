#ifndef INCLUDED_com_theproductengine_model_TabModel
#define INCLUDED_com_theproductengine_model_TabModel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d48a7b4a2bb63aa1_13_new)
HX_DECLARE_CLASS3(com,theproductengine,model,TabModel)

namespace com{
namespace theproductengine{
namespace model{


class HXCPP_CLASS_ATTRIBUTES TabModel_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TabModel_obj OBJ_;
		TabModel_obj();

	public:
		enum { _hx_ClassId = 0x1920275c };

		void __construct(::String tabName,::String tabContent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.theproductengine.model.TabModel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"com.theproductengine.model.TabModel"); }

		inline static ::hx::ObjectPtr< TabModel_obj > __new(::String tabName,::String tabContent) {
			::hx::ObjectPtr< TabModel_obj > __this = new TabModel_obj();
			__this->__construct(tabName,tabContent);
			return __this;
		}

		inline static ::hx::ObjectPtr< TabModel_obj > __alloc(::hx::Ctx *_hx_ctx,::String tabName,::String tabContent) {
			TabModel_obj *__this = (TabModel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabModel_obj), true, "com.theproductengine.model.TabModel"));
			*(void **)__this = TabModel_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d48a7b4a2bb63aa1_13_new)
HXLINE(  14)		( ( ::com::theproductengine::model::TabModel)(__this) )->tabName = tabName;
HXLINE(  15)		( ( ::com::theproductengine::model::TabModel)(__this) )->tabContent = tabContent;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabModel_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabModel",34,61,ae,54); }

		::String tabName;
		::String tabContent;
		::String getTabName();
		::Dynamic getTabName_dyn();

		::String getTabContent();
		::Dynamic getTabContent_dyn();

};

} // end namespace com
} // end namespace theproductengine
} // end namespace model

#endif /* INCLUDED_com_theproductengine_model_TabModel */ 
