/*!
    \file
    \brief test values
*/

#ifndef TEST
#define TEST

#include "library.h"

/// \brief constant true values for test input to compare
///  roots and number of roots that solver will calculate with pre-registered true values
/// \details values:
/// 1: a
/// 2: b
/// 3: c
/// 4: expected first root
/// 5: expected second root
/// 6: expected number of roots

const struct Test test_arr[] =
{
    {1, 4, 3.98, -1.858579, -2.141421, 1},
    {1, 5,    6,        -2,        -3, 2},
    {-100, 0, 25, -0.5, 0.5, 2},

    {1,    7,  6,    -1, -6, 2}
};

#endif
