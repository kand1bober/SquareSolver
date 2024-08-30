/*!
\file
    \brief output function
*/

#include "output.h"
#include "library.h"

/// \brief function prints number of roots and roots themselves
/// \param print pointer to structure with abswers of quadratic equation
void print_answer(struct Answer* print)
{
    ASSERT(print);

    switch(print->nroot)
    {
        case TWO_ROOTS:
            printf(GREEN "Amount of roots: %d\n", print->nroot);
            printf("Roots:\n"
                            "first: %lf\n"
                            "second: %lf" DELETE_COLOR, print->x1, print->x2);
            break;

        case ONE_ROOT:
            printf(YELLOW "Amount of roots: %d\n", print->nroot);
            printf("Root: %lf\n" DELETE_COLOR, print->x1);
            break;

        case NO_ROOTS:
            printf(SINIY "Amount of roots: Zero\n" DELETE_COLOR);
            break;

        case INF_ROOTS:
            printf(BLUE "infinite amount of roots\n" DELETE_COLOR);
            break;
        default:
            printf(PURPLE "Unknown result" DELETE_COLOR);
            break;
    }
}
