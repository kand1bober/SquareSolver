#ifndef SOLVER_HEADER
#define SOLVER_HEADER

#include "library.h"

number_roots solver(struct Coeff coef, struct Answer* root_ptr);
int square_solver(struct Coeff coef, struct Answer* root_ptr);

#endif
