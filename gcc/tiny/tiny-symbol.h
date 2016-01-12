#ifndef TINY_SYMBOL_H
#define TINY_SYMBOL_H

#include "tiny/tiny-tree.h"

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tree.h"


namespace Tiny
{

struct Symbol
{
public:
  Symbol (const std::string &name_) : name (name_), decl (error_mark_node)
  {
    gcc_assert (name.size () > 0);
  }

  std::string
  get_name () const
  {
    return name;
  }

  void
  set_tree_decl (Tree decl_)
  {
    gcc_assert (decl_.get_tree_code() == VAR_DECL);
    decl = decl_;
  }

  Tree
  get_tree_decl () const
  {
    return decl;
  }

private:
  std::string name;
  Tree decl;
};
}

#endif // TINY_SYMBOL_H
