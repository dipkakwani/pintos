#ifndef FIXED_POINT_H
#define FIXED_POINT_H

#include <stdint.h>

/* A floating point number can be represented in p.q format and stored as an
   integer, where q bits represent the fractional part and p bits represents
   a positive integer and an additional of 1 bit is required for sign. A 
   floating point number (in form of fraction) can be converted into p.q 
   representation by multiplying it by the factor 2^q and can be obtained back
   by dividing by the same factor. Here, we are going to use 17.14 format 
   stored in a 32 bit signed integer. */

typedef int32_t real_t;

#define factor (1 << 14)

/* Conversions. */
real_t real_convert (int n);
real_t real_convert_fraction (int a, int b);
int real_int (real_t x);
int real_int_round (real_t x);

/* Arithmetic. */
real_t real_add (real_t x, real_t y);
real_t real_add_int (real_t x, int n);
real_t real_subtract (real_t x, real_t y);
real_t real_subtract_int (real_t x, int n);
real_t real_subtract_int2 (int n, real_t x);
real_t real_multiply (real_t x, real_t y);
real_t real_multiply_int (real_t x, int n);
real_t real_divide (real_t x, real_t y);
real_t real_divide_int (real_t x, int n);
real_t real_divide_int2 (int n, real_t x);

#endif /* threads/fixed-point.h */
