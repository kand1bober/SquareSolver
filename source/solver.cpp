#include "../include/solver.h"
#include "../include/library.h"
#include "../include/compare.h"

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
        else
        {
            root_ptr->x1 = (-coef.c) / coef.b;
            root_ptr->nroot = ONE_ROOT;
        }
    }
    else
    {
        square_solver(coef, root_ptr);
    }

    return root_ptr->nroot;
}

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


