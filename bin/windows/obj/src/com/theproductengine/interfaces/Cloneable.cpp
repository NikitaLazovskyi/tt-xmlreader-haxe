#include <hxcpp.h>

#ifndef INCLUDED_com_theproductengine_interfaces_Cloneable
#include <com/theproductengine/interfaces/Cloneable.h>
#endif

namespace com{
namespace theproductengine{
namespace interfaces{


static ::String Cloneable_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class Cloneable_obj::__mClass;

void Cloneable_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("com.theproductengine.interfaces.Cloneable",a4,04,14,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Cloneable_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x9ff5233c >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace theproductengine
} // end namespace interfaces
