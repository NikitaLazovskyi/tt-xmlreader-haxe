#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2840d5ff18655d53_50_urlEncode,"StringTools","urlEncode",0x06afdce1,"StringTools.urlEncode","D:\\HaxeToolkit\\haxe\\std/StringTools.hx",50,0x0d59238c)
HX_LOCAL_STACK_FRAME(_hx_pos_2840d5ff18655d53_118_urlDecode,"StringTools","urlDecode",0x71b947f9,"StringTools.urlDecode","D:\\HaxeToolkit\\haxe\\std/StringTools.hx",118,0x0d59238c)
HX_LOCAL_STACK_FRAME(_hx_pos_2840d5ff18655d53_158_htmlEscape,"StringTools","htmlEscape",0x0e1a5dd0,"StringTools.htmlEscape","D:\\HaxeToolkit\\haxe\\std/StringTools.hx",158,0x0d59238c)
static const ::String _hx_array_data_0363db6a_4[] = {
	HX_("&quot;",2c,d9,81,8f),
};
static const ::String _hx_array_data_0363db6a_5[] = {
	HX_("&amp;",dd,d4,aa,21),
};
static const ::String _hx_array_data_0363db6a_6[] = {
	HX_("&#039;",62,26,77,78),
};
static const ::String _hx_array_data_0363db6a_7[] = {
	HX_("&lt;",4d,74,70,19),
};
static const ::String _hx_array_data_0363db6a_8[] = {
	HX_("&gt;",08,a9,6c,19),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2840d5ff18655d53_194_htmlUnescape,"StringTools","htmlUnescape",0x7457fea9,"StringTools.htmlUnescape","D:\\HaxeToolkit\\haxe\\std/StringTools.hx",194,0x0d59238c)
HX_LOCAL_STACK_FRAME(_hx_pos_2840d5ff18655d53_238_startsWith,"StringTools","startsWith",0x5f4e6efb,"StringTools.startsWith","D:\\HaxeToolkit\\haxe\\std/StringTools.hx",238,0x0d59238c)
HX_LOCAL_STACK_FRAME(_hx_pos_2840d5ff18655d53_249_endsWith,"StringTools","endsWith",0x0eb5bfe2,"StringTools.endsWith","D:\\HaxeToolkit\\haxe\\std/StringTools.hx",249,0x0d59238c)
HX_LOCAL_STACK_FRAME(_hx_pos_2840d5ff18655d53_278_isSpace,"StringTools","isSpace",0xe0290778,"StringTools.isSpace","D:\\HaxeToolkit\\haxe\\std/StringTools.hx",278,0x0d59238c)
HX_LOCAL_STACK_FRAME(_hx_pos_2840d5ff18655d53_296_ltrim,"StringTools","ltrim",0x24d2234a,"StringTools.ltrim","D:\\HaxeToolkit\\haxe\\std/StringTools.hx",296,0x0d59238c)
HX_LOCAL_STACK_FRAME(_hx_pos_2840d5ff18655d53_321_rtrim,"StringTools","rtrim",0x99399e50,"StringTools.rtrim","D:\\HaxeToolkit\\haxe\\std/StringTools.hx",321,0x0d59238c)
HX_LOCAL_STACK_FRAME(_hx_pos_2840d5ff18655d53_349_trim,"StringTools","trim",0x2908d066,"StringTools.trim","D:\\HaxeToolkit\\haxe\\std/StringTools.hx",349,0x0d59238c)
HX_LOCAL_STACK_FRAME(_hx_pos_2840d5ff18655d53_365_lpad,"StringTools","lpad",0x23bd8feb,"StringTools.lpad","D:\\HaxeToolkit\\haxe\\std/StringTools.hx",365,0x0d59238c)
HX_LOCAL_STACK_FRAME(_hx_pos_2840d5ff18655d53_424_replace,"StringTools","replace",0x6d651f30,"StringTools.replace","D:\\HaxeToolkit\\haxe\\std/StringTools.hx",424,0x0d59238c)
HX_LOCAL_STACK_FRAME(_hx_pos_2840d5ff18655d53_434_hex,"StringTools","hex",0xd91debd7,"StringTools.hex","D:\\HaxeToolkit\\haxe\\std/StringTools.hx",434,0x0d59238c)

void StringTools_obj::__construct() { }

Dynamic StringTools_obj::__CreateEmpty() { return new StringTools_obj; }

void *StringTools_obj::_hx_vtable = 0;

Dynamic StringTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringTools_obj > _hx_result = new StringTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x084f186e;
}

::String StringTools_obj::urlEncode(::String s){
            	HX_STACKFRAME(&_hx_pos_2840d5ff18655d53_50_urlEncode)
HXDLIN(  50)		return ( (::String)(s.__URLEncode()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlEncode,return )

::String StringTools_obj::urlDecode(::String s){
            	HX_STACKFRAME(&_hx_pos_2840d5ff18655d53_118_urlDecode)
HXDLIN( 118)		return ( (::String)(s.__URLDecode()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlDecode,return )

::String StringTools_obj::htmlEscape(::String s, ::Dynamic quotes){
            	HX_GC_STACKFRAME(&_hx_pos_2840d5ff18655d53_158_htmlEscape)
HXLINE( 159)		 ::StringBuf buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 160)		{
HXLINE( 160)			int _g_offset = 0;
HXDLIN( 160)			::String _g_s = s;
HXDLIN( 160)			while((_g_offset < _g_s.length)){
HXLINE( 160)				::String s = _g_s;
HXDLIN( 160)				_g_offset = (_g_offset + 1);
HXDLIN( 160)				int index = (_g_offset - 1);
HXDLIN( 160)				int c = s.cca(index);
HXDLIN( 160)				bool _hx_tmp;
HXDLIN( 160)				if ((c >= 55296)) {
HXLINE( 160)					_hx_tmp = (c <= 56319);
            				}
            				else {
HXLINE( 160)					_hx_tmp = false;
            				}
HXDLIN( 160)				if (_hx_tmp) {
HXLINE( 635)					c = (((c - 55232) << 10) | (s.cca((index + 1)) & 1023));
            				}
HXLINE( 160)				int c1 = c;
HXDLIN( 160)				if ((c1 >= 65536)) {
HXLINE( 160)					_g_offset = (_g_offset + 1);
            				}
HXDLIN( 160)				int code = c1;
HXLINE( 161)				switch((int)(code)){
            					case (int)34: {
HXLINE( 168)						if (( (bool)(quotes) )) {
HXLINE( 169)							if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 169)								buf->flush();
            							}
HXDLIN( 169)							if (::hx::IsNull( buf->b )) {
HXLINE( 169)								buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_4,1);
            							}
            							else {
HXLINE( 169)								buf->b->push(HX_("&quot;",2c,d9,81,8f));
            							}
            						}
            						else {
HXLINE( 173)							if ((code >= 127)) {
HXLINE( 173)								::String x = ::String::fromCharCode(code);
HXDLIN( 173)								if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 173)									buf->flush();
            								}
HXDLIN( 173)								if (::hx::IsNull( buf->b )) {
HXLINE( 173)									buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 173)									::Array< ::String > buf1 = buf->b;
HXDLIN( 173)									buf1->push(::Std_obj::string(x));
            								}
            							}
            							else {
HXLINE( 173)								if (::hx::IsNull( buf->charBuf )) {
HXLINE( 173)									buf->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 173)								buf->charBuf->push(code);
            							}
            						}
            					}
            					break;
            					case (int)38: {
HXLINE( 163)						if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 163)							buf->flush();
            						}
HXDLIN( 163)						if (::hx::IsNull( buf->b )) {
HXLINE( 163)							buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_5,1);
            						}
            						else {
HXLINE( 163)							buf->b->push(HX_("&amp;",dd,d4,aa,21));
            						}
            					}
            					break;
            					case (int)39: {
HXLINE( 170)						if (( (bool)(quotes) )) {
HXLINE( 171)							if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 171)								buf->flush();
            							}
HXDLIN( 171)							if (::hx::IsNull( buf->b )) {
HXLINE( 171)								buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_6,1);
            							}
            							else {
HXLINE( 171)								buf->b->push(HX_("&#039;",62,26,77,78));
            							}
            						}
            						else {
HXLINE( 173)							if ((code >= 127)) {
HXLINE( 173)								::String x = ::String::fromCharCode(code);
HXDLIN( 173)								if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 173)									buf->flush();
            								}
HXDLIN( 173)								if (::hx::IsNull( buf->b )) {
HXLINE( 173)									buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 173)									::Array< ::String > buf1 = buf->b;
HXDLIN( 173)									buf1->push(::Std_obj::string(x));
            								}
            							}
            							else {
HXLINE( 173)								if (::hx::IsNull( buf->charBuf )) {
HXLINE( 173)									buf->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 173)								buf->charBuf->push(code);
            							}
            						}
            					}
            					break;
            					case (int)60: {
HXLINE( 165)						if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 165)							buf->flush();
            						}
HXDLIN( 165)						if (::hx::IsNull( buf->b )) {
HXLINE( 165)							buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_7,1);
            						}
            						else {
HXLINE( 165)							buf->b->push(HX_("&lt;",4d,74,70,19));
            						}
            					}
            					break;
            					case (int)62: {
HXLINE( 167)						if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 167)							buf->flush();
            						}
HXDLIN( 167)						if (::hx::IsNull( buf->b )) {
HXLINE( 167)							buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_8,1);
            						}
            						else {
HXLINE( 167)							buf->b->push(HX_("&gt;",08,a9,6c,19));
            						}
            					}
            					break;
            					default:{
HXLINE( 173)						if ((code >= 127)) {
HXLINE( 173)							::String x = ::String::fromCharCode(code);
HXDLIN( 173)							if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 173)								buf->flush();
            							}
HXDLIN( 173)							if (::hx::IsNull( buf->b )) {
HXLINE( 173)								buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 173)								::Array< ::String > buf1 = buf->b;
HXDLIN( 173)								buf1->push(::Std_obj::string(x));
            							}
            						}
            						else {
HXLINE( 173)							if (::hx::IsNull( buf->charBuf )) {
HXLINE( 173)								buf->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN( 173)							buf->charBuf->push(code);
            						}
            					}
            				}
            			}
            		}
HXLINE( 176)		return buf->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,htmlEscape,return )

::String StringTools_obj::htmlUnescape(::String s){
            	HX_STACKFRAME(&_hx_pos_2840d5ff18655d53_194_htmlUnescape)
HXDLIN( 194)		return s.split(HX_("&gt;",08,a9,6c,19))->join(HX_(">",3e,00,00,00)).split(HX_("&lt;",4d,74,70,19))->join(HX_("<",3c,00,00,00)).split(HX_("&quot;",2c,d9,81,8f))->join(HX_("\"",22,00,00,00)).split(HX_("&#039;",62,26,77,78))->join(HX_("'",27,00,00,00)).split(HX_("&amp;",dd,d4,aa,21))->join(HX_("&",26,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,htmlUnescape,return )

bool StringTools_obj::startsWith(::String s,::String start){
            	HX_STACKFRAME(&_hx_pos_2840d5ff18655d53_238_startsWith)
HXDLIN( 238)		if ((s.length >= start.length)) {
HXDLIN( 238)			return (s.lastIndexOf(start,0) == 0);
            		}
            		else {
HXDLIN( 238)			return false;
            		}
HXDLIN( 238)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,startsWith,return )

bool StringTools_obj::endsWith(::String s,::String end){
            	HX_STACKFRAME(&_hx_pos_2840d5ff18655d53_249_endsWith)
HXLINE( 263)		int elen = end.length;
HXLINE( 264)		int slen = s.length;
HXLINE( 265)		if ((slen >= elen)) {
HXLINE( 265)			return (s.indexOf(end,(slen - elen)) == (slen - elen));
            		}
            		else {
HXLINE( 265)			return false;
            		}
HXDLIN( 265)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,endsWith,return )

bool StringTools_obj::isSpace(::String s,int pos){
            	HX_STACKFRAME(&_hx_pos_2840d5ff18655d53_278_isSpace)
HXLINE( 283)		 ::Dynamic c = s.charCodeAt(pos);
HXLINE( 284)		bool _hx_tmp;
HXDLIN( 284)		if (::hx::IsGreater( c,8 )) {
HXLINE( 284)			_hx_tmp = ::hx::IsLess( c,14 );
            		}
            		else {
HXLINE( 284)			_hx_tmp = false;
            		}
HXDLIN( 284)		if (!(_hx_tmp)) {
HXLINE( 284)			return ::hx::IsEq( c,32 );
            		}
            		else {
HXLINE( 284)			return true;
            		}
HXDLIN( 284)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,isSpace,return )

::String StringTools_obj::ltrim(::String s){
            	HX_STACKFRAME(&_hx_pos_2840d5ff18655d53_296_ltrim)
HXLINE( 300)		int l = s.length;
HXLINE( 301)		int r = 0;
HXLINE( 302)		while(true){
HXLINE( 302)			bool _hx_tmp;
HXDLIN( 302)			if ((r < l)) {
HXLINE( 302)				_hx_tmp = ::StringTools_obj::isSpace(s,r);
            			}
            			else {
HXLINE( 302)				_hx_tmp = false;
            			}
HXDLIN( 302)			if (!(_hx_tmp)) {
HXLINE( 302)				goto _hx_goto_13;
            			}
HXLINE( 303)			r = (r + 1);
            		}
            		_hx_goto_13:;
HXLINE( 305)		if ((r > 0)) {
HXLINE( 306)			return s.substr(r,(l - r));
            		}
            		else {
HXLINE( 308)			return s;
            		}
HXLINE( 305)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,ltrim,return )

::String StringTools_obj::rtrim(::String s){
            	HX_STACKFRAME(&_hx_pos_2840d5ff18655d53_321_rtrim)
HXLINE( 325)		int l = s.length;
HXLINE( 326)		int r = 0;
HXLINE( 327)		while(true){
HXLINE( 327)			bool _hx_tmp;
HXDLIN( 327)			if ((r < l)) {
HXLINE( 327)				_hx_tmp = ::StringTools_obj::isSpace(s,((l - r) - 1));
            			}
            			else {
HXLINE( 327)				_hx_tmp = false;
            			}
HXDLIN( 327)			if (!(_hx_tmp)) {
HXLINE( 327)				goto _hx_goto_15;
            			}
HXLINE( 328)			r = (r + 1);
            		}
            		_hx_goto_15:;
HXLINE( 330)		if ((r > 0)) {
HXLINE( 331)			return s.substr(0,(l - r));
            		}
            		else {
HXLINE( 333)			return s;
            		}
HXLINE( 330)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,rtrim,return )

::String StringTools_obj::trim(::String s){
            	HX_STACKFRAME(&_hx_pos_2840d5ff18655d53_349_trim)
HXDLIN( 349)		return ::StringTools_obj::ltrim(::StringTools_obj::rtrim(s));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,trim,return )

::String StringTools_obj::lpad(::String s,::String c,int l){
            	HX_GC_STACKFRAME(&_hx_pos_2840d5ff18655d53_365_lpad)
HXLINE( 366)		if ((c.length <= 0)) {
HXLINE( 367)			return s;
            		}
HXLINE( 369)		 ::StringBuf buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 370)		l = (l - s.length);
HXLINE( 371)		while((buf->get_length() < l)){
HXLINE( 372)			if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 372)				buf->flush();
            			}
HXDLIN( 372)			if (::hx::IsNull( buf->b )) {
HXLINE( 372)				buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(c));
            			}
            			else {
HXLINE( 372)				::Array< ::String > buf1 = buf->b;
HXDLIN( 372)				buf1->push(::Std_obj::string(c));
            			}
            		}
HXLINE( 374)		{
HXLINE( 374)			if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 374)				buf->flush();
            			}
HXDLIN( 374)			if (::hx::IsNull( buf->b )) {
HXLINE( 374)				buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(s));
            			}
            			else {
HXLINE( 374)				::Array< ::String > buf1 = buf->b;
HXDLIN( 374)				buf1->push(::Std_obj::string(s));
            			}
            		}
HXLINE( 375)		return buf->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,lpad,return )

::String StringTools_obj::replace(::String s,::String sub,::String by){
            	HX_STACKFRAME(&_hx_pos_2840d5ff18655d53_424_replace)
HXDLIN( 424)		return s.split(sub)->join(by);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,replace,return )

::String StringTools_obj::hex(int n, ::Dynamic digits){
            	HX_STACKFRAME(&_hx_pos_2840d5ff18655d53_434_hex)
HXLINE( 440)		::String s = HX_("",00,00,00,00);
HXLINE( 441)		::String hexChars = HX_("0123456789ABCDEF",68,2a,58,a2);
HXLINE( 442)		while(true){
HXLINE( 443)			s = (hexChars.charAt((n & 15)) + s);
HXLINE( 444)			n = ::hx::UShr(n,4);
HXLINE( 442)			if (!((n > 0))) {
HXLINE( 442)				goto _hx_goto_21;
            			}
            		}
            		_hx_goto_21:;
HXLINE( 455)		if (::hx::IsNotNull( digits )) {
HXLINE( 456)			while(::hx::IsLess( s.length,digits )){
HXLINE( 457)				s = (HX_("0",30,00,00,00) + s);
            			}
            		}
HXLINE( 459)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,hex,return )


StringTools_obj::StringTools_obj()
{
}

bool StringTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { outValue = hex_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"trim") ) { outValue = trim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lpad") ) { outValue = lpad_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ltrim") ) { outValue = ltrim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rtrim") ) { outValue = rtrim_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSpace") ) { outValue = isSpace_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"replace") ) { outValue = replace_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endsWith") ) { outValue = endsWith_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlEncode") ) { outValue = urlEncode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"urlDecode") ) { outValue = urlDecode_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"htmlEscape") ) { outValue = htmlEscape_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"startsWith") ) { outValue = startsWith_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"htmlUnescape") ) { outValue = htmlUnescape_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StringTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StringTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class StringTools_obj::__mClass;

static ::String StringTools_obj_sStaticFields[] = {
	HX_("urlEncode",e5,4e,52,9a),
	HX_("urlDecode",fd,b9,5b,05),
	HX_("htmlEscape",4c,af,9b,a8),
	HX_("htmlUnescape",25,a7,ed,ae),
	HX_("startsWith",77,c0,cf,f9),
	HX_("endsWith",5e,7a,b6,db),
	HX_("isSpace",7c,30,ec,1d),
	HX_("ltrim",4e,43,4a,7c),
	HX_("rtrim",54,be,b1,f0),
	HX_("trim",e2,9c,03,4d),
	HX_("lpad",67,5c,b8,47),
	HX_("replace",34,48,28,ab),
	HX_("hex",db,42,4f,00),
	::String(null())
};

void StringTools_obj::__register()
{
	StringTools_obj _hx_dummy;
	StringTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StringTools",6a,db,63,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StringTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StringTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

