/*!
    \file
    \brief solver header
*/

#ifndef SOLVER_HEADER
#define SOLVER_HEADER

#include "library.h"

/// \brief function finds out number of roots and calls square_solver or solve linear equation based on value of coefficients
/// \param coef strcture with coeffs of equation
/// \param root_ptr pointer to a field of structure with value of amount of roots
/// \return returning amount of roots in enum value
number_roots solver(struct Coeff coef, struct Answer* root_ptr);

/// \brief function calculates roots based on the coefficients
/// \param coef structure with coefficients
/// \param root_ptr pointer to a field of structure with value of amount of roots
/// \return returs amount of roots based on value of discriminant
int square_solver(struct Coeff coef, struct Answer* root_ptr);

#endif
