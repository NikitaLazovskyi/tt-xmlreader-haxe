#ifndef INCLUDED_com_theproductengine_xmlreader_XMLReader
#define INCLUDED_com_theproductengine_xmlreader_XMLReader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,theproductengine,model,TabModel)
HX_DECLARE_CLASS3(com,theproductengine,xmlreader,XMLReader)

namespace com{
namespace theproductengine{
namespace xmlreader{


class HXCPP_CLASS_ATTRIBUTES XMLReader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef XMLReader_obj OBJ_;
		XMLReader_obj();

	public:
		enum { _hx_ClassId = 0x2054e9bd };

		void __construct(::String fileName);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.theproductengine.xmlreader.XMLReader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"com.theproductengine.xmlreader.XMLReader"); }
		static ::hx::ObjectPtr< XMLReader_obj > __new(::String fileName);
		static ::hx::ObjectPtr< XMLReader_obj > __alloc(::hx::Ctx *_hx_ctx,::String fileName);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~XMLReader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("XMLReader",5a,c6,ad,40); }

		::String FOLDER_NAME;
		::Array< ::Dynamic> MODELS;
		::Array< ::Dynamic> getModels();
		::Dynamic getModels_dyn();

};

} // end namespace com
} // end namespace theproductengine
} // end namespace xmlreader

#endif /* INCLUDED_com_theproductengine_xmlreader_XMLReader */ 
