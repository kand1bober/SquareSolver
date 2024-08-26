/*!
\file
    \brief compare file


*/

#include "compare.h"
#include "library.h"

/**
    \brief Comparing two close double values

 */
extern const double ACCURACY;
bool compare_small(const double a, const double b)
{
    assert(isfinite(a));    ///checking a for finiteness
    assert(isfinite(b));    ///checking b for finiteness

    const double diff = fabs(a-b);
    return diff < ACCURACY;
}
