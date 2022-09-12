#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_com_theproductengine_Main
#include <com/theproductengine/Main.h>
#endif
#ifndef INCLUDED_com_theproductengine_builder_TabBuilder
#include <com/theproductengine/builder/TabBuilder.h>
#endif
#ifndef INCLUDED_com_theproductengine_builder_TabGroup
#include <com/theproductengine/builder/TabGroup.h>
#endif
#ifndef INCLUDED_com_theproductengine_interfaces_Cloneable
#include <com/theproductengine/interfaces/Cloneable.h>
#endif
#ifndef INCLUDED_com_theproductengine_ui_Tab
#include <com/theproductengine/ui/Tab.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1c628ec70cc67a56_16_new,"com.theproductengine.Main","new",0x0e6a8a6c,"com.theproductengine.Main.new","com/theproductengine/Main.hx",16,0x860553a4)
HX_DEFINE_STACK_FRAME(_hx_pos_1c628ec70cc67a56_74_new,"com.theproductengine.Main","new",0x0e6a8a6c,"com.theproductengine.Main.new","com/theproductengine/Main.hx",74,0x860553a4)
static const ::String _hx_array_data_86ea247a_3[] = {
	HX_("Some text for \n tab",41,bd,af,8f),
};
static const ::String _hx_array_data_86ea247a_4[] = {
	HX_(" \n ------------ \n -----asd--- \n asdasdasd \n kitty ipsum dolor",51,17,d1,81),
};
HX_LOCAL_STACK_FRAME(_hx_pos_1c628ec70cc67a56_82_changeTextOfMainTab,"com.theproductengine.Main","changeTextOfMainTab",0x0e57eb54,"com.theproductengine.Main.changeTextOfMainTab","com/theproductengine/Main.hx",82,0x860553a4)
HX_LOCAL_STACK_FRAME(_hx_pos_1c628ec70cc67a56_88_changeColorForTabLater,"com.theproductengine.Main","changeColorForTabLater",0x0a462281,"com.theproductengine.Main.changeColorForTabLater","com/theproductengine/Main.hx",88,0x860553a4)
namespace com{
namespace theproductengine{

void Main_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_1c628ec70cc67a56_16_new)
HXLINE(  29)		this->txtFrmt =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  28)		this->borderTab = true;
HXLINE(  27)		this->backgroundTab = true;
HXLINE(  26)		this->tabHeight = ((Float)40);
HXLINE(  25)		this->tabWidth = ((Float)150);
HXLINE(  24)		this->backgroundThemeColor = 15329769;
HXLINE(  23)		this->backgroundTabColor = 11652587;
HXLINE(  22)		this->clearence = ((Float)15);
HXLINE(  32)		 ::com::theproductengine::Main _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  33)		super::__construct();
HXLINE(  35)		this->txtFrmt->align = 0;
HXLINE(  36)		this->txtFrmt->size = 20;
HXLINE(  38)		this->get_graphics()->beginFill(this->backgroundThemeColor,null());
HXLINE(  39)		this->get_graphics()->drawRect(( (Float)(0) ),( (Float)(0) ),( (Float)(800) ),( (Float)(480) ));
HXLINE(  40)		this->get_graphics()->endFill();
HXLINE(  43)		 ::com::theproductengine::ui::Tab example = ::com::theproductengine::ui::Tab_obj::builder()->setBackground(this->backgroundTab)->setBackgroundColor(this->backgroundThemeColor)->setHeight(this->tabHeight)->setWidth(this->tabWidth)->setX(this->clearence)->setY(this->clearence)->setTextFormat(this->txtFrmt)->setText(HX_("Tab1",5c,dc,cf,37))->setBorder(this->borderTab)->build();
HXLINE(  55)		 ::com::theproductengine::builder::TabGroup tabGroup =  ::com::theproductengine::builder::TabGroup_obj::__alloc( HX_CTX ,( (Float)(10) ),( (Float)(10) ),( (Float)(10) ),example,8,( (Float)(780) ),this->txtFrmt,this->backgroundTabColor);
HXLINE(  56)		::Array< ::Dynamic> tabArray = tabGroup->getTabs();
HXLINE(  57)		this->mainTab = tabGroup->getMainTextField();
HXLINE(  58)		this->addChild(this->mainTab);
HXLINE(  60)		int i = 1;
HXLINE(  61)		int iterator_current = 0;
HXDLIN(  61)		::Array< ::Dynamic> iterator_array = tabArray;
HXLINE(  62)		while((iterator_current < iterator_array->length)){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::com::theproductengine::Main,_gthis, ::StringBuf,st) HXARGC(1)
            			void _hx_run( ::openfl::events::MouseEvent event){
            				HX_GC_STACKFRAME(&_hx_pos_1c628ec70cc67a56_74_new)
HXLINE(  74)				 ::com::theproductengine::Main _gthis1 = _gthis;
HXDLIN(  74)				::String _hx_tmp = st->toString();
HXDLIN(  74)				_gthis1->changeTextOfMainTab(_hx_tmp,::hx::TCast<  ::openfl::text::TextField >::cast(event->target));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  64)			iterator_current = (iterator_current + 1);
HXDLIN(  64)			 ::com::theproductengine::ui::Tab v = iterator_array->__get((iterator_current - 1)).StaticCast<  ::com::theproductengine::ui::Tab >();
HXLINE(  65)			 ::openfl::text::TextField textField = v->getTextField();
HXLINE(  66)			textField->set_text((HX_("Tab",35,12,40,00) + i));
HXLINE(  67)			 ::StringBuf st =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  68)			{
HXLINE(  68)				if (::hx::IsNotNull( st->charBuf )) {
HXLINE(  68)					st->flush();
            				}
HXDLIN(  68)				if (::hx::IsNull( st->b )) {
HXLINE(  68)					st->b = ::Array_obj< ::String >::fromData( _hx_array_data_86ea247a_3,1);
            				}
            				else {
HXLINE(  68)					st->b->push(HX_("Some text for \n tab",41,bd,af,8f));
            				}
            			}
HXLINE(  69)			{
HXLINE(  69)				if (::hx::IsNotNull( st->charBuf )) {
HXLINE(  69)					st->flush();
            				}
HXDLIN(  69)				if (::hx::IsNull( st->b )) {
HXLINE(  69)					::String _hx_tmp = ::Std_obj::string(i);
HXDLIN(  69)					st->b = ::Array_obj< ::String >::__new(1)->init(0,_hx_tmp);
            				}
            				else {
HXLINE(  69)					::Array< ::String > st1 = st->b;
HXDLIN(  69)					st1->push(::Std_obj::string(i));
            				}
            			}
HXLINE(  70)			{
HXLINE(  70)				if (::hx::IsNotNull( st->charBuf )) {
HXLINE(  70)					st->flush();
            				}
HXDLIN(  70)				if (::hx::IsNull( st->b )) {
HXLINE(  70)					st->b = ::Array_obj< ::String >::fromData( _hx_array_data_86ea247a_4,1);
            				}
            				else {
HXLINE(  70)					st->b->push(HX_(" \n ------------ \n -----asd--- \n asdasdasd \n kitty ipsum dolor",51,17,d1,81));
            				}
            			}
HXLINE(  72)			textField->addEventListener(HX_("click",48,7c,5e,48), ::Dynamic(new _hx_Closure_0(_gthis,st)),null(),null(),null());
HXLINE(  76)			this->addChild(textField);
HXLINE(  77)			i = (i + 1);
            		}
            	}

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07c3d5b2) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07c3d5b2;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Main_obj::changeTextOfMainTab(::String text, ::openfl::text::TextField field){
            	HX_STACKFRAME(&_hx_pos_1c628ec70cc67a56_82_changeTextOfMainTab)
HXLINE(  83)		 ::openfl::text::TextField _hx_tmp = this->mainTab;
HXDLIN(  83)		_hx_tmp->replaceText(0,this->mainTab->get_text().length,text);
HXLINE(  84)		this->changeColorForTabLater(field);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,changeTextOfMainTab,(void))

void Main_obj::changeColorForTabLater( ::openfl::text::TextField tab){
            	HX_STACKFRAME(&_hx_pos_1c628ec70cc67a56_88_changeColorForTabLater)
HXLINE(  89)		tab->set_backgroundColor(this->backgroundTabColor);
HXLINE(  90)		if (::hx::IsNotNull( this->previousTab )) {
HXLINE(  92)			this->previousTab->set_backgroundColor(this->backgroundThemeColor);
            		}
HXLINE(  94)		this->previousTab = tab;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,changeColorForTabLater,(void))


::hx::ObjectPtr< Main_obj > Main_obj::__new() {
	::hx::ObjectPtr< Main_obj > __this = new Main_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Main_obj > Main_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Main_obj *__this = (Main_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), true, "com.theproductengine.Main"));
	*(void **)__this = Main_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(previousTab,"previousTab");
	HX_MARK_MEMBER_NAME(mainTab,"mainTab");
	HX_MARK_MEMBER_NAME(clearence,"clearence");
	HX_MARK_MEMBER_NAME(backgroundTabColor,"backgroundTabColor");
	HX_MARK_MEMBER_NAME(backgroundThemeColor,"backgroundThemeColor");
	HX_MARK_MEMBER_NAME(tabWidth,"tabWidth");
	HX_MARK_MEMBER_NAME(tabHeight,"tabHeight");
	HX_MARK_MEMBER_NAME(backgroundTab,"backgroundTab");
	HX_MARK_MEMBER_NAME(borderTab,"borderTab");
	HX_MARK_MEMBER_NAME(txtFrmt,"txtFrmt");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(previousTab,"previousTab");
	HX_VISIT_MEMBER_NAME(mainTab,"mainTab");
	HX_VISIT_MEMBER_NAME(clearence,"clearence");
	HX_VISIT_MEMBER_NAME(backgroundTabColor,"backgroundTabColor");
	HX_VISIT_MEMBER_NAME(backgroundThemeColor,"backgroundThemeColor");
	HX_VISIT_MEMBER_NAME(tabWidth,"tabWidth");
	HX_VISIT_MEMBER_NAME(tabHeight,"tabHeight");
	HX_VISIT_MEMBER_NAME(backgroundTab,"backgroundTab");
	HX_VISIT_MEMBER_NAME(borderTab,"borderTab");
	HX_VISIT_MEMBER_NAME(txtFrmt,"txtFrmt");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Main_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"mainTab") ) { return ::hx::Val( mainTab ); }
		if (HX_FIELD_EQ(inName,"txtFrmt") ) { return ::hx::Val( txtFrmt ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabWidth") ) { return ::hx::Val( tabWidth ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clearence") ) { return ::hx::Val( clearence ); }
		if (HX_FIELD_EQ(inName,"tabHeight") ) { return ::hx::Val( tabHeight ); }
		if (HX_FIELD_EQ(inName,"borderTab") ) { return ::hx::Val( borderTab ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"previousTab") ) { return ::hx::Val( previousTab ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"backgroundTab") ) { return ::hx::Val( backgroundTab ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"backgroundTabColor") ) { return ::hx::Val( backgroundTabColor ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"changeTextOfMainTab") ) { return ::hx::Val( changeTextOfMainTab_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"backgroundThemeColor") ) { return ::hx::Val( backgroundThemeColor ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"changeColorForTabLater") ) { return ::hx::Val( changeColorForTabLater_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Main_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"mainTab") ) { mainTab=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"txtFrmt") ) { txtFrmt=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabWidth") ) { tabWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clearence") ) { clearence=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabHeight") ) { tabHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderTab") ) { borderTab=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"previousTab") ) { previousTab=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"backgroundTab") ) { backgroundTab=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"backgroundTabColor") ) { backgroundTabColor=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"backgroundThemeColor") ) { backgroundThemeColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("previousTab",5e,92,07,b3));
	outFields->push(HX_("mainTab",9c,03,4a,3b));
	outFields->push(HX_("clearence",58,17,fe,cb));
	outFields->push(HX_("backgroundTabColor",dc,e0,8a,59));
	outFields->push(HX_("backgroundThemeColor",28,f0,5c,a2));
	outFields->push(HX_("tabWidth",71,37,07,39));
	outFields->push(HX_("tabHeight",1c,c4,98,63));
	outFields->push(HX_("backgroundTab",07,27,f1,91));
	outFields->push(HX_("borderTab",c9,a0,9b,80));
	outFields->push(HX_("txtFrmt",43,36,a4,cb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Main_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(Main_obj,previousTab),HX_("previousTab",5e,92,07,b3)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(Main_obj,mainTab),HX_("mainTab",9c,03,4a,3b)},
	{::hx::fsFloat,(int)offsetof(Main_obj,clearence),HX_("clearence",58,17,fe,cb)},
	{::hx::fsInt,(int)offsetof(Main_obj,backgroundTabColor),HX_("backgroundTabColor",dc,e0,8a,59)},
	{::hx::fsInt,(int)offsetof(Main_obj,backgroundThemeColor),HX_("backgroundThemeColor",28,f0,5c,a2)},
	{::hx::fsFloat,(int)offsetof(Main_obj,tabWidth),HX_("tabWidth",71,37,07,39)},
	{::hx::fsFloat,(int)offsetof(Main_obj,tabHeight),HX_("tabHeight",1c,c4,98,63)},
	{::hx::fsBool,(int)offsetof(Main_obj,backgroundTab),HX_("backgroundTab",07,27,f1,91)},
	{::hx::fsBool,(int)offsetof(Main_obj,borderTab),HX_("borderTab",c9,a0,9b,80)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(Main_obj,txtFrmt),HX_("txtFrmt",43,36,a4,cb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Main_obj_sStaticStorageInfo = 0;
#endif

static ::String Main_obj_sMemberFields[] = {
	HX_("previousTab",5e,92,07,b3),
	HX_("mainTab",9c,03,4a,3b),
	HX_("clearence",58,17,fe,cb),
	HX_("backgroundTabColor",dc,e0,8a,59),
	HX_("backgroundThemeColor",28,f0,5c,a2),
	HX_("tabWidth",71,37,07,39),
	HX_("tabHeight",1c,c4,98,63),
	HX_("backgroundTab",07,27,f1,91),
	HX_("borderTab",c9,a0,9b,80),
	HX_("txtFrmt",43,36,a4,cb),
	HX_("changeTextOfMainTab",48,59,3f,aa),
	HX_("changeColorForTabLater",0d,e5,48,46),
	::String(null()) };

::hx::Class Main_obj::__mClass;

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("com.theproductengine.Main",7a,24,ea,86);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Main_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace theproductengine
