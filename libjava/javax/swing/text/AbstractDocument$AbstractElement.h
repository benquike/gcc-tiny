
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_AbstractDocument$AbstractElement__
#define __javax_swing_text_AbstractDocument$AbstractElement__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class AbstractDocument;
          class AbstractDocument$AbstractElement;
          class AttributeSet;
          class Document;
          class Element;
      }
      namespace tree
      {
          class TreeNode;
      }
    }
  }
}

class javax::swing::text::AbstractDocument$AbstractElement : public ::java::lang::Object
{

public:
  AbstractDocument$AbstractElement(::javax::swing::text::AbstractDocument *, ::javax::swing::text::Element *, ::javax::swing::text::AttributeSet *);
  virtual ::java::util::Enumeration * children() = 0;
  virtual jboolean getAllowsChildren() = 0;
  virtual ::javax::swing::tree::TreeNode * getChildAt(jint);
  virtual jint getChildCount();
  virtual jint getIndex(::javax::swing::tree::TreeNode *);
  virtual ::javax::swing::tree::TreeNode * getParent();
  virtual jboolean isLeaf() = 0;
  virtual void addAttribute(::java::lang::Object *, ::java::lang::Object *);
  virtual void addAttributes(::javax::swing::text::AttributeSet *);
  virtual void removeAttribute(::java::lang::Object *);
  virtual void removeAttributes(::javax::swing::text::AttributeSet *);
  virtual void removeAttributes(::java::util::Enumeration *);
  virtual void setResolveParent(::javax::swing::text::AttributeSet *);
  virtual jboolean containsAttribute(::java::lang::Object *, ::java::lang::Object *);
  virtual jboolean containsAttributes(::javax::swing::text::AttributeSet *);
  virtual ::javax::swing::text::AttributeSet * copyAttributes();
  virtual ::java::lang::Object * getAttribute(::java::lang::Object *);
  virtual jint getAttributeCount();
  virtual ::java::util::Enumeration * getAttributeNames();
  virtual ::javax::swing::text::AttributeSet * getResolveParent();
  virtual jboolean isDefined(::java::lang::Object *);
  virtual jboolean isEqual(::javax::swing::text::AttributeSet *);
  virtual ::javax::swing::text::AttributeSet * getAttributes();
  virtual ::javax::swing::text::Document * getDocument();
  virtual ::javax::swing::text::Element * getElement(jint) = 0;
  virtual ::java::lang::String * getName();
  virtual ::javax::swing::text::Element * getParentElement();
  virtual jint getEndOffset() = 0;
  virtual jint getElementCount() = 0;
  virtual jint getElementIndex(jint) = 0;
  virtual jint getStartOffset() = 0;
  virtual void dump(::java::io::PrintStream *, jint);
private:
  static const jlong serialVersionUID = 1712240033321461704LL;
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) count;
  jint offset;
  ::javax::swing::text::AttributeSet * attributes;
  ::javax::swing::text::Element * element_parent;
  ::javax::swing::tree::TreeNode * tree_parent;
  ::java::util::Vector * tree_children;
  ::javax::swing::text::AbstractDocument * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_AbstractDocument$AbstractElement__
