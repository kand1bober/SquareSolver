#include "output.h"
#include "library.h"



void print_answer(struct Answer* print)
{
    assert(print);

    switch(print->nroot)
    {
    case TWO_ROOTS:
        printf("\u001b[32;1mAmount of roots: %d\n", print->nroot);
        printf("Roots:\n"
                        "first: %lf\n"
                        "second: %lf\u001b[0m\n", print->x1, print->x2);
        break;

    case ONE_ROOT:
        printf("\u001b[33;1mAmount of roots: %d\n", print->nroot);
        printf("Root: %lf\u001b[0m\n", print->x1);
        break;

    case NO_ROOTS:
        printf("\u001b[34;1mAmount of roots: Zero\u001b[0m\n");
        break;

    case INF_ROOTS:
        printf("\u001b[36;1minfinite amount of roots\u001b[0m\n");
        break;
    default:
        printf("\u001b[35;1mUnknown result\u001b[0m");
        break;
    }


}
