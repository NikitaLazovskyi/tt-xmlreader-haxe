#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_utils_AssetCache
#include <lime/utils/AssetCache.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_77dd7e775494cb08_14_new,"lime.utils.AssetCache","new",0x205507da,"lime.utils.AssetCache.new","lime/utils/AssetCache.hx",14,0xcfac28d4)
HX_LOCAL_STACK_FRAME(_hx_pos_77dd7e775494cb08_38_exists,"lime.utils.AssetCache","exists",0x81df4ea2,"lime.utils.AssetCache.exists","lime/utils/AssetCache.hx",38,0xcfac28d4)
HX_LOCAL_STACK_FRAME(_hx_pos_77dd7e775494cb08_59_set,"lime.utils.AssetCache","set",0x2058d31c,"lime.utils.AssetCache.set","lime/utils/AssetCache.hx",59,0xcfac28d4)
HX_LOCAL_STACK_FRAME(_hx_pos_77dd7e775494cb08_81_clear,"lime.utils.AssetCache","clear",0x54b4fb87,"lime.utils.AssetCache.clear","lime/utils/AssetCache.hx",81,0xcfac28d4)
namespace lime{
namespace utils{

void AssetCache_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_77dd7e775494cb08_14_new)
HXLINE(  17)		this->enabled = true;
HXLINE(  24)		this->audio =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  25)		this->font =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  26)		this->image =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  33)		this->version = 516155;
            	}

Dynamic AssetCache_obj::__CreateEmpty() { return new AssetCache_obj; }

void *AssetCache_obj::_hx_vtable = 0;

Dynamic AssetCache_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetCache_obj > _hx_result = new AssetCache_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetCache_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x218de06a;
}

bool AssetCache_obj::exists(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_77dd7e775494cb08_38_exists)
HXLINE(  39)		bool _hx_tmp;
HXDLIN(  39)		if ((type != HX_("IMAGE",3b,57,57,3b))) {
HXLINE(  39)			_hx_tmp = ::hx::IsNull( type );
            		}
            		else {
HXLINE(  39)			_hx_tmp = true;
            		}
HXDLIN(  39)		if (_hx_tmp) {
HXLINE(  41)			if (this->image->exists(id)) {
HXLINE(  41)				return true;
            			}
            		}
HXLINE(  44)		bool _hx_tmp1;
HXDLIN(  44)		if ((type != HX_("FONT",cf,25,81,2e))) {
HXLINE(  44)			_hx_tmp1 = ::hx::IsNull( type );
            		}
            		else {
HXLINE(  44)			_hx_tmp1 = true;
            		}
HXDLIN(  44)		if (_hx_tmp1) {
HXLINE(  46)			if (this->font->exists(id)) {
HXLINE(  46)				return true;
            			}
            		}
HXLINE(  49)		bool _hx_tmp2;
HXDLIN(  49)		bool _hx_tmp3;
HXDLIN(  49)		if ((type != HX_("SOUND",af,c4,ba,fe))) {
HXLINE(  49)			_hx_tmp3 = (type == HX_("MUSIC",85,08,49,8e));
            		}
            		else {
HXLINE(  49)			_hx_tmp3 = true;
            		}
HXDLIN(  49)		if (!(_hx_tmp3)) {
HXLINE(  49)			_hx_tmp2 = ::hx::IsNull( type );
            		}
            		else {
HXLINE(  49)			_hx_tmp2 = true;
            		}
HXDLIN(  49)		if (_hx_tmp2) {
HXLINE(  51)			if (this->audio->exists(id)) {
HXLINE(  51)				return true;
            			}
            		}
HXLINE(  54)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,exists,return )

void AssetCache_obj::set(::String id,::String type, ::Dynamic asset){
            	HX_STACKFRAME(&_hx_pos_77dd7e775494cb08_59_set)
HXDLIN(  59)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE(  62)			this->font->set(id,asset);
HXDLIN(  62)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE(  65)			if (!(::Std_obj::isOfType(asset,::hx::ClassOf< ::lime::graphics::Image >()))) {
HXLINE(  65)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Cannot cache non-Image asset: ",d6,62,c2,3a) + ::Std_obj::string(asset)) + HX_(" as Image",ad,d1,70,d4))));
            			}
HXLINE(  67)			this->image->set(id,( ( ::lime::graphics::Image)(asset) ));
HXLINE(  64)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("MUSIC",85,08,49,8e)) ||  (_hx_switch_0==HX_("SOUND",af,c4,ba,fe)) ){
HXLINE(  70)			if (!(::Std_obj::isOfType(asset,::hx::ClassOf< ::lime::media::AudioBuffer >()))) {
HXLINE(  70)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Cannot cache non-AudioBuffer asset: ",b1,96,a5,01) + ::Std_obj::string(asset)) + HX_(" as AudioBuffer",48,2a,fe,73))));
            			}
HXLINE(  72)			this->audio->set(id,( ( ::lime::media::AudioBuffer)(asset) ));
HXLINE(  69)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  75)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((type + HX_(" assets are not cachable",f3,2d,ee,fa))));
            		}
            		_hx_goto_2:;
            	}


HX_DEFINE_DYNAMIC_FUNC3(AssetCache_obj,set,(void))

void AssetCache_obj::clear(::String prefix){
            	HX_GC_STACKFRAME(&_hx_pos_77dd7e775494cb08_81_clear)
HXDLIN(  81)		if (::hx::IsNull( prefix )) {
HXLINE(  83)			this->audio =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  84)			this->font =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  85)			this->image =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE(  89)			 ::Dynamic keys = this->audio->keys();
HXLINE(  91)			{
HXLINE(  91)				 ::Dynamic key = keys;
HXDLIN(  91)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  91)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  93)					if (::StringTools_obj::startsWith(key1,prefix)) {
HXLINE(  95)						this->audio->remove(key1);
            					}
            				}
            			}
HXLINE(  99)			 ::Dynamic keys1 = this->font->keys();
HXLINE( 101)			{
HXLINE( 101)				 ::Dynamic key1 = keys1;
HXDLIN( 101)				while(( (bool)(key1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 101)					::String key = ( (::String)(key1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 103)					if (::StringTools_obj::startsWith(key,prefix)) {
HXLINE( 105)						this->font->remove(key);
            					}
            				}
            			}
HXLINE( 109)			 ::Dynamic keys2 = this->image->keys();
HXLINE( 111)			{
HXLINE( 111)				 ::Dynamic key2 = keys2;
HXDLIN( 111)				while(( (bool)(key2->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 111)					::String key = ( (::String)(key2->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 113)					if (::StringTools_obj::startsWith(key,prefix)) {
HXLINE( 115)						this->image->remove(key);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,clear,(void))


::hx::ObjectPtr< AssetCache_obj > AssetCache_obj::__new() {
	::hx::ObjectPtr< AssetCache_obj > __this = new AssetCache_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AssetCache_obj > AssetCache_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AssetCache_obj *__this = (AssetCache_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetCache_obj), true, "lime.utils.AssetCache"));
	*(void **)__this = AssetCache_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetCache_obj::AssetCache_obj()
{
}

void AssetCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetCache);
	HX_MARK_MEMBER_NAME(audio,"audio");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_END_CLASS();
}

void AssetCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(audio,"audio");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(version,"version");
}

::hx::Val AssetCache_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return ::hx::Val( font ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { return ::hx::Val( audio ); }
		if (HX_FIELD_EQ(inName,"image") ) { return ::hx::Val( image ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		if (HX_FIELD_EQ(inName,"version") ) { return ::hx::Val( version ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AssetCache_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { audio=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("audio",d6,78,80,27));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("image",5b,1f,69,bd));
	outFields->push(HX_("font",cf,5d,c0,43));
	outFields->push(HX_("version",18,e7,f1,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AssetCache_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetCache_obj,audio),HX_("audio",d6,78,80,27)},
	{::hx::fsBool,(int)offsetof(AssetCache_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetCache_obj,image),HX_("image",5b,1f,69,bd)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetCache_obj,font),HX_("font",cf,5d,c0,43)},
	{::hx::fsInt,(int)offsetof(AssetCache_obj,version),HX_("version",18,e7,f1,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AssetCache_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetCache_obj_sMemberFields[] = {
	HX_("audio",d6,78,80,27),
	HX_("enabled",81,04,31,7e),
	HX_("image",5b,1f,69,bd),
	HX_("font",cf,5d,c0,43),
	HX_("version",18,e7,f1,7c),
	HX_("exists",dc,1d,e0,bf),
	HX_("set",a2,9b,57,00),
	HX_("clear",8d,71,5b,48),
	::String(null()) };

::hx::Class AssetCache_obj::__mClass;

void AssetCache_obj::__register()
{
	AssetCache_obj _hx_dummy;
	AssetCache_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils.AssetCache",e8,d2,51,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AssetCache_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AssetCache_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetCache_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetCache_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
