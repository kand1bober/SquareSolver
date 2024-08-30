/*!
\file
    \brief Test of solving quadratic equation


*/

#include "UnitTest.h"
#include "compare.h"
#include "solver.h"
#include "Tests.h"

/// \brief rules the unit test iterations
/// \param test_arr constant array of structures with true parameters of equation
/// \param size number of structures in array
void driver(const struct Test test_arr[], int size)
{
    for(int y = 0; y < size; y++)
    {
        unit_test(test_arr[y], y);
        ASSERT(y < size);
    }
}

/// \brief In this function I spleat Test structure into two:
///        Coeffs and Answer, and create constant of type Coeffs and variable of type Answer to call function solver
/// \param unit -- variable of type Test
/// \param y -- itertion of the unit test
void unit_test(struct Test unit, int y)                         //тест с вводом из массива
{
    int num_test = y + 1;

    Coeff const coeffs_fake =
    {   ///a in structure
        unit.a_test,
        ///b in structure
        unit.b_test,
        ///c in structure
        unit.c_test,
    };

    Answer root_fake
    {
        NO_ROOTS,              //nroot
        0,                 //x1
        0,                 //x2
    };
    ///Solver can only take variable of type Coeffs and Answers
    solver(coeffs_fake, &root_fake);                          //int nroot = solver();

    if(compare_small(unit.x1_exp, root_fake.x1) && unit.nroot_exp == root_fake.nroot  && compare_small(unit.x2_exp, root_fake.x2)) //
    {
        printf(GREEN "Test%d correct\n" DELETE_COLOR, num_test);
    }
    else
    {
        printf(RED "Test%d: x1 = %lf, x2 = %lf Expected x1 = %lf, x2 = %lf\n"
        "nroot = %d Expected nroot = %d \n" DELETE_COLOR, num_test, root_fake.x1, root_fake.x2, unit.x1_exp, unit.x2_exp,
        root_fake.nroot, unit.nroot_exp);
    }
}

