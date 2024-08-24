#include "compare.h"
#include "library.h"


bool compare_small(const double a, const double b)
{
    assert(isfinite(a));
    assert(isfinite(b));

    const double diff = fabs(a-b);
    return diff < ACCURACY;
}
