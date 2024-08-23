#include "../include/compare.h"
#include "../include/library.h"


bool compare_small(const double a, const double b)
{
    assert(isfinite(a));
    assert(isfinite(b));

    const double diff = fabs(a-b);
    const double ACCURACY = 1e-5;
    return diff < ACCURACY;
}
