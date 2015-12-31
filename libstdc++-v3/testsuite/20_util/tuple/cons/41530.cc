// { dg-options "-std=gnu++11" }
// { dg-do compile }

// Copyright (C) 2009-2015 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// Tuple

#include <tuple>

class A {};
class B : public A {};

// PR libstdc++/41530
void test01()
{
  std::tuple<B*> b;
  std::tuple<A*> a1(b);
  std::tuple<A*> a2(std::move(b));
}
