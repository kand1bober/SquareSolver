/*!
    \file
    \brief inpur header
*/

#ifndef INPUT_HEADER
#define INPUT_HEADER

#include "library.h"

/// \brief  input of coefficints to a non-constant structure
/// \param  coef_ptr -- pointer to a variable of structure type with coefficients
/// \return returns --  enum value showing errors
prog_errors coef_input(struct Coeff* coef_ptr);

#endif
