/*!
\file
    \brief compare file


*/

#include "library.h"
#include "solver.h"
#include "input.h"
#include "output.h"
#include "UnitTest.h"
#include "Tests.h"

/// \brief main function
/// \param a, b, c -- Coefficients of square equation
int main(int argc, char* argv[])
{
    struct Coeff coef = {0, 0, 0};          // структура
    struct Answer root = {NO_ROOTS, 0, 0};


    if(argc == 2)
    {
        if(!strcmp(argv[1], "--help"))
        {
            printf("\n");
            printf(BLUE "Commands:\n" DELETE_COLOR);
            printf(YELLOW "Type" DELETE_COLOR " --normal " YELLOW "for usual input\n");
            printf("Type" DELETE_COLOR " --test " YELLOW "to check test results\n" DELETE_COLOR);
        }
        if(!strcmp(argv[1], "--test"))
            driver(test_arr, sizeof(test_arr) / sizeof(test_arr[0]));

        if(!strcmp(argv[1], "--normal"))
        {
            if(coef_input(/*&coef*/NULL) != NO_ERRORS)                    //   ввод коэффициентов
            {
                fprintf(stderr, RED "wrong coeffs\n" DELETE_COLOR);
                return NO_ERRORS;

            }
            solver(coef, &root);
            print_answer(&root);
        }
    }
    else
        fprintf(stderr, RED "Wrong input\nType --help to see available commands\n" DELETE_COLOR);
}
