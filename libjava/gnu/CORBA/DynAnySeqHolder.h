
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_DynAnySeqHolder__
#define __gnu_CORBA_DynAnySeqHolder__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
        class DynAnySeqHolder;
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace DynamicAny
      {
          class DynAny;
      }
    }
  }
}

class gnu::CORBA::DynAnySeqHolder : public ::java::lang::Object
{

public:
  DynAnySeqHolder();
  DynAnySeqHolder(JArray< ::org::omg::DynamicAny::DynAny * > *);
  virtual void _read(::org::omg::CORBA::portable::InputStream *);
  virtual void _write(::org::omg::CORBA::portable::OutputStream *);
  virtual ::org::omg::CORBA::TypeCode * _type();
  JArray< ::org::omg::DynamicAny::DynAny * > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) value;
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_DynAnySeqHolder__
