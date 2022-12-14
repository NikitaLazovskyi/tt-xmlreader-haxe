#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_exceptions_ArgumentException
#include <haxe/exceptions/ArgumentException.h>
#endif
#ifndef INCLUDED_haxe_exceptions_PosException
#include <haxe/exceptions/PosException.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d1640740ace530f8_12_new,"haxe.exceptions.ArgumentException","new",0x0586be82,"haxe.exceptions.ArgumentException.new","D:\\HaxeToolkit\\haxe\\std/haxe/exceptions/ArgumentException.hx",12,0x757e7cc6)
namespace haxe{
namespace exceptions{

void ArgumentException_obj::__construct(::String argument,::String message, ::haxe::Exception previous, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_d1640740ace530f8_12_new)
HXLINE(  13)		::String _hx_tmp;
HXDLIN(  13)		if (::hx::IsNull( message )) {
HXLINE(  13)			_hx_tmp = ((HX_("Invalid argument \"",68,9a,34,24) + argument) + HX_("\"",22,00,00,00));
            		}
            		else {
HXLINE(  13)			_hx_tmp = message;
            		}
HXDLIN(  13)		super::__construct(_hx_tmp,previous,pos);
HXLINE(  14)		this->argument = argument;
            	}

Dynamic ArgumentException_obj::__CreateEmpty() { return new ArgumentException_obj; }

void *ArgumentException_obj::_hx_vtable = 0;

Dynamic ArgumentException_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArgumentException_obj > _hx_result = new ArgumentException_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ArgumentException_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x65f7252d) {
		if (inClassId<=(int)0x48a0bea4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x48a0bea4;
		} else {
			return inClassId==(int)0x65f7252d;
		}
	} else {
		return inClassId==(int)0x677ddc49;
	}
}


ArgumentException_obj::ArgumentException_obj()
{
}

void ArgumentException_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArgumentException);
	HX_MARK_MEMBER_NAME(argument,"argument");
	 ::haxe::exceptions::PosException_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ArgumentException_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(argument,"argument");
	 ::haxe::exceptions::PosException_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ArgumentException_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"argument") ) { return ::hx::Val( argument ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ArgumentException_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"argument") ) { argument=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArgumentException_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("argument",7d,6e,a9,05));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ArgumentException_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ArgumentException_obj,argument),HX_("argument",7d,6e,a9,05)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ArgumentException_obj_sStaticStorageInfo = 0;
#endif

static ::String ArgumentException_obj_sMemberFields[] = {
	HX_("argument",7d,6e,a9,05),
	::String(null()) };

::hx::Class ArgumentException_obj::__mClass;

void ArgumentException_obj::__register()
{
	ArgumentException_obj _hx_dummy;
	ArgumentException_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.exceptions.ArgumentException",90,15,69,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ArgumentException_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ArgumentException_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArgumentException_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArgumentException_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace exceptions
