#include <hxcpp.h>

#ifndef INCLUDED_com_theproductengine_model_TabModel
#include <com/theproductengine/model/TabModel.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d48a7b4a2bb63aa1_13_new,"com.theproductengine.model.TabModel","new",0x9f0f97ec,"com.theproductengine.model.TabModel.new","com/theproductengine/model/TabModel.hx",13,0xb0a58bc3)
HX_LOCAL_STACK_FRAME(_hx_pos_d48a7b4a2bb63aa1_20_getTabName,"com.theproductengine.model.TabModel","getTabName",0x8dc84f3e,"com.theproductengine.model.TabModel.getTabName","com/theproductengine/model/TabModel.hx",20,0xb0a58bc3)
HX_LOCAL_STACK_FRAME(_hx_pos_d48a7b4a2bb63aa1_25_getTabContent,"com.theproductengine.model.TabModel","getTabContent",0x0d3f0a26,"com.theproductengine.model.TabModel.getTabContent","com/theproductengine/model/TabModel.hx",25,0xb0a58bc3)
namespace com{
namespace theproductengine{
namespace model{

void TabModel_obj::__construct(::String tabName,::String tabContent){
            	HX_STACKFRAME(&_hx_pos_d48a7b4a2bb63aa1_13_new)
HXLINE(  14)		this->tabName = tabName;
HXLINE(  15)		this->tabContent = tabContent;
            	}

Dynamic TabModel_obj::__CreateEmpty() { return new TabModel_obj; }

void *TabModel_obj::_hx_vtable = 0;

Dynamic TabModel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabModel_obj > _hx_result = new TabModel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TabModel_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1920275c;
}

::String TabModel_obj::getTabName(){
            	HX_STACKFRAME(&_hx_pos_d48a7b4a2bb63aa1_20_getTabName)
HXDLIN(  20)		return this->tabName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabModel_obj,getTabName,return )

::String TabModel_obj::getTabContent(){
            	HX_STACKFRAME(&_hx_pos_d48a7b4a2bb63aa1_25_getTabContent)
HXDLIN(  25)		return this->tabContent;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabModel_obj,getTabContent,return )


TabModel_obj::TabModel_obj()
{
}

void TabModel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabModel);
	HX_MARK_MEMBER_NAME(tabName,"tabName");
	HX_MARK_MEMBER_NAME(tabContent,"tabContent");
	HX_MARK_END_CLASS();
}

void TabModel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tabName,"tabName");
	HX_VISIT_MEMBER_NAME(tabContent,"tabContent");
}

::hx::Val TabModel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"tabName") ) { return ::hx::Val( tabName ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tabContent") ) { return ::hx::Val( tabContent ); }
		if (HX_FIELD_EQ(inName,"getTabName") ) { return ::hx::Val( getTabName_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTabContent") ) { return ::hx::Val( getTabContent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TabModel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"tabName") ) { tabName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tabContent") ) { tabContent=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabModel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tabName",40,47,75,41));
	outFields->push(HX_("tabContent",64,7f,4f,db));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabModel_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TabModel_obj,tabName),HX_("tabName",40,47,75,41)},
	{::hx::fsString,(int)offsetof(TabModel_obj,tabContent),HX_("tabContent",64,7f,4f,db)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabModel_obj_sStaticStorageInfo = 0;
#endif

static ::String TabModel_obj_sMemberFields[] = {
	HX_("tabName",40,47,75,41),
	HX_("tabContent",64,7f,4f,db),
	HX_("getTabName",4a,cd,d6,90),
	HX_("getTabContent",9a,db,c1,37),
	::String(null()) };

::hx::Class TabModel_obj::__mClass;

void TabModel_obj::__register()
{
	TabModel_obj _hx_dummy;
	TabModel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("com.theproductengine.model.TabModel",fa,71,9a,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabModel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabModel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabModel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabModel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace theproductengine
} // end namespace model
