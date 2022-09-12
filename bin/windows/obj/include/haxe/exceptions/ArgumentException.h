#ifndef INCLUDED_haxe_exceptions_ArgumentException
#define INCLUDED_haxe_exceptions_ArgumentException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_exceptions_PosException
#include <haxe/exceptions/PosException.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_d1640740ace530f8_12_new)
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS2(haxe,exceptions,ArgumentException)
HX_DECLARE_CLASS2(haxe,exceptions,PosException)

namespace haxe{
namespace exceptions{


class HXCPP_CLASS_ATTRIBUTES ArgumentException_obj : public  ::haxe::exceptions::PosException_obj
{
	public:
		typedef  ::haxe::exceptions::PosException_obj super;
		typedef ArgumentException_obj OBJ_;
		ArgumentException_obj();

	public:
		enum { _hx_ClassId = 0x48a0bea4 };

		void __construct(::String argument,::String message, ::haxe::Exception previous, ::Dynamic pos);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.exceptions.ArgumentException")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.exceptions.ArgumentException"); }

		inline static ::hx::ObjectPtr< ArgumentException_obj > __new(::String argument,::String message, ::haxe::Exception previous, ::Dynamic pos) {
			::hx::ObjectPtr< ArgumentException_obj > __this = new ArgumentException_obj();
			__this->__construct(argument,message,previous,pos);
			return __this;
		}

		inline static ::hx::ObjectPtr< ArgumentException_obj > __alloc(::hx::Ctx *_hx_ctx,::String argument,::String message, ::haxe::Exception previous, ::Dynamic pos) {
			ArgumentException_obj *__this = (ArgumentException_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArgumentException_obj), true, "haxe.exceptions.ArgumentException"));
			*(void **)__this = ArgumentException_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d1640740ace530f8_12_new)
HXLINE(  13)		::String _hx_tmp;
HXDLIN(  13)		if (::hx::IsNull( message )) {
HXLINE(  13)			_hx_tmp = ((HX_("Invalid argument \"",68,9a,34,24) + argument) + HX_("\"",22,00,00,00));
            		}
            		else {
HXLINE(  13)			_hx_tmp = message;
            		}
HXDLIN(  13)		__this->super::__construct(_hx_tmp,previous,pos);
HXLINE(  14)		( ( ::haxe::exceptions::ArgumentException)(__this) )->argument = argument;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArgumentException_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArgumentException",f2,09,08,ee); }

		::String argument;
};

} // end namespace haxe
} // end namespace exceptions

#endif /* INCLUDED_haxe_exceptions_ArgumentException */ 
