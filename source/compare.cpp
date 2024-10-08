/*!
\file
    \brief compare file
*/

#include "compare.h"
#include "library.h"

/// \brief Comparing two close double values: a and b
extern const double ACCURACY;
bool compare_small(const double a, const double b)
{
    ASSERT(isfinite(a));    ///checking a for finiteness
    ASSERT(isfinite(b));    ///checking b for finiteness

    const double diff = fabs(a-b);
    return diff < ACCURACY;
}
