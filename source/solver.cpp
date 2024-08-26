/*!
\file
    \brief compare file
*/

#include "solver.h"
#include "compare.h"

/// \brief function finds out number of roots and calls square_solver or solve linear equation based on value of coefficients
/// \param coef strcture with coeffs of equation
/// \param root_ptr pointer to a field of structure with value of amount of roots
/// \return returning amount of roots in enum value
number_roots solver(struct Coeff coef, struct Answer* root_ptr)
{
    // assert(isfinite(a));
    // assert(isfinite(b));
    // assert(isfinite(c));
    assert(root_ptr);       // root.ptr

    if(compare_small(coef.a, 0))
    {
        if(compare_small(coef.b, 0))   // LinearSolver
        {
            if(compare_small(coef.c, 0))
            {
                root_ptr->nroot = INF_ROOTS;
            }
            else
            {
                root_ptr->nroot = NO_ROOTS;
            }
        }
        else if(!compare_small(coef.c, 0))
        {
            root_ptr->x1 = (-coef.c) / coef.b;
            root_ptr->nroot = ONE_ROOT;
        }
        else
        {
            root_ptr->x1 = 0;
            root_ptr->nroot = ONE_ROOT;
        }
    }
    else
    {
        square_solver(coef, root_ptr);
    }

    return root_ptr->nroot;
}

/// \brief function calculates roots based on the coefficients
/// \param coef structure with coefficients
/// \param root_ptr pointer to a field of structure with value of amount of roots
/// \return returs amount of roots based on value of discriminant
int square_solver(struct Coeff coef, struct Answer* root_ptr)
{
    assert(isfinite(coef.a));
    assert(isfinite(coef.b));
    assert(isfinite(coef.c));
    assert(root_ptr);
    assert(root_ptr);

    double D = (coef.b * coef.b) - 4 * coef.a * coef.c;

    if(compare_small(D, 0))
    {
        root_ptr->nroot = ONE_ROOT;
        root_ptr->x1 = (-coef.b) / (2 * coef.a);
    }
    else if(D > 0)
    {
        root_ptr->nroot = TWO_ROOTS;

        root_ptr->x1 = (-coef.b + sqrt(D)) / (2 * coef.a);

        root_ptr->x2 = (-coef.b - sqrt(D)) / (2 * coef.a);
    }
    else
        root_ptr->nroot = INF_ROOTS;
    return root_ptr->nroot;
}


