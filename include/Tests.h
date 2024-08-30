/*!
    \file
    \brief test values
*/

#ifndef TEST
#define TEST

#include "library.h"

/// \brief array of constant true values for test input to compare
///  roots and number of roots that solver will calculate with pre-registered true values
/// \details values:\n
/// 1: a\n
/// 2: b\n
/// 3: c\n
/// 4: expected first roon\n
/// 5: expected second root\n
/// 6: expected number of roots\n

const struct Test test_arr[] =
{
    {1, 4, 3.98, -1.858579, -2.141421, 1},
    {1, 5,    6,        -2,        -3, 2},
    {-100, 0, 25,      -0.5,    0.5,   2},

    {1,    7,  6,       -1,      -6,   2}
};

#endif
