#include <debug.h>
#include "threads/fixed-point.h"

/* Converts an int to real number. */
inline real_t
real_convert (int n)
{
  return (n * factor);
}

/* Converts a fraction to real number. */
inline real_t
real_convert_fraction (int a, int b)
{
  return (a * factor / b);
}

/* Converts a real number to integer and rounds it toward 0. */
inline int
real_int (real_t x)
{
  return (x / factor);
}

/* Converts a real number to integer and rounds it to the nearest integer. */
inline int
real_int_round (real_t x)
{
  return ((x >= 0) ? (x + factor / 2) / factor : (x - factor / 2) / factor);
}

/* Adds two real numbers. */
inline real_t
real_add (real_t x, real_t y)
{
  return (x + y);
}

/* Adds a real number x to an integer n. */
inline real_t
real_add_int (real_t x, int n)
{
  return (x + n * factor);
}

/* Subracts real number y from another real number x. */
inline real_t
real_subtract (real_t x, real_t y)
{
  return (x - y);
}

/* Subtracts an integer n from a real number x. */
inline real_t
real_subtract_int (real_t x, int n)
{
  return (x - n * factor);
}

/* Subtracts real number x from an integer n. */
inline real_t
real_subtract_int2 (int n, real_t x)
{
  return (n * factor - x);
}

/* Multiplies two real numbers. */
inline real_t
real_multiply (real_t x, real_t y)
{
  return (((int64_t) x) * y / factor);
}

/* Multiplies a real number x with an integer n. */
inline real_t
real_multiply_int (real_t x, int n)
{
  return (x * n);
}

/* Divides a real number x by another real number y. */
inline real_t
real_divide (real_t x, real_t y)
{
  ASSERT (y != 0);

  return (((int64_t) x) * factor / y);
}

/* Divides a real number x by an integer n. */
inline real_t
real_divide_int (real_t x, int n)
{
  ASSERT (n != 0);

  return (x / n);
}

/* Divides an integer by a real number x. */
inline real_t
real_divide_int2 (int n, real_t x)
{
  ASSERT (x != 0);

  return (n / x);
}
