/* Test the `vreinterprets64_u64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vreinterprets64_u64 (void)
{
  int64x1_t out_int64x1_t;
  uint64x1_t arg0_uint64x1_t;

  out_int64x1_t = vreinterpret_s64_u64 (arg0_uint64x1_t);
}

