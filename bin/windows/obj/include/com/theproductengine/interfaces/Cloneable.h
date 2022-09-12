#ifndef INCLUDED_com_theproductengine_interfaces_Cloneable
#define INCLUDED_com_theproductengine_interfaces_Cloneable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,theproductengine,interfaces,Cloneable)

namespace com{
namespace theproductengine{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES Cloneable_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::Dynamic (::hx::Object :: *_hx_clone)(); 
		static inline  ::Dynamic clone( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::com::theproductengine::interfaces::Cloneable_obj *>(_hx_.mPtr->_hx_getInterface(0x9ff5233c)))->_hx_clone)();
		}
};

} // end namespace com
} // end namespace theproductengine
} // end namespace interfaces

#endif /* INCLUDED_com_theproductengine_interfaces_Cloneable */ 
