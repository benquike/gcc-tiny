/* Test the `vget_highf32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vget_highf32 (void)
{
  float32x2_t out_float32x2_t;
  float32x4_t arg0_float32x4_t;

  out_float32x2_t = vget_high_f32 (arg0_float32x4_t);
}

