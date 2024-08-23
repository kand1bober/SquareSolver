
#include "../include/library.h"
#include "../include/solver.h"
#include "../include/input.h"
#include "../include/output.h"
#include "../include/UnitTest.h"

/*
#ifdef CLEAN
    #define DEBUG_ASSERT(expr) assert(expr)
#else
    #define DEBUG_ASSERT(expr)
#endif
*/

int main(int argc, char* argv[])
{
     struct Coeff coef = {0, 0, 0};          // структура
     struct Answer root = {NO_ROOTS, 0, 0};
     struct Test test_arr[] =
    {
        {1, 4, 3.98, -1.858579, -2.141421, 1},
        {1, 5,    6,        -2,        -3, 2},
        {-100, 0, 25, -0.5, 0.5, 2},
        {1,    7,  6,    -1, -6, 2}
    };

    if(argc == 2)
    {
        if(!strcmp(argv[1], "--help"))
            {
                printf("\n");
                printf("\u001b[36;1mCommands:\u001b[0m\n");
                printf("\u001b[33;1mType\u001b[0m --normal \u001b[33;1mfor usual input\n");
                printf("Type\u001b[0m --test \u001b[33;1mto check test results\u001b[0m\n");
            }
        if(!strcmp(argv[1], "--test"))
            driver(test_arr);

        if(!strcmp(argv[1], "--normal"))
        {
            if(coef_input(&coef) != NO_ERRORS)                    //   ввод коэффициентов
            {
                fprintf(stderr, "wrong coeffs\n");
                return NO_ERRORS;

            }
            solver(coef, &root);
            print_answer(&root);
        }
    }
    else
        printf("\u001b[35;1mWrong input\nType --help to see available commands\u001b[0m\n");
}
