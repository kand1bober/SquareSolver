/*!
\file
    \brief Unit test header file

*/

#ifndef UNITTEST_HEADER
#define UNITTEST_HEADER

#include "library.h"

/// \brief rules the unit test iterations
/// \param test_arr constant array of structures with true parameters of equation
/// \param size number of structures in array
void driver(const struct Test test_arr[], int size);

/// \brief
/// \param unit
/// \param y
void unit_test(struct Test unit, int y);

#endif
