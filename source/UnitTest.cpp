#include "../include/UnitTest.h"
#include "../include/library.h"
#include "../include/compare.h"
#include "../include/solver.h"


void driver(struct Test test_arr[])
{
    for(int y = 0; y <= 3; y++)
        unit_test(test_arr[y], y);
}


void unit_test(struct Test unit, int y)                         //тест с вводом из массива
{
    int num_test = y + 1;

    Coeff coeffs_fake =
    {
        unit.a_test,              //a
        unit.b_test,              //b
        unit.c_test,              //c
    };

    Answer root_fake
    {
        NO_ROOTS,              //nroot
        0,                 //x1
        0,                 //x2
    };

    solver(coeffs_fake, &root_fake);                          //int nroot = solver();

    if(compare_small(unit.x1_exp, root_fake.x1) && unit.nroot_exp == root_fake.nroot  && compare_small(unit.x2_exp, root_fake.x2)) //
    {
        printf("\u001b[32;1mTest%d correct\u001b[0m\n", num_test);
    }
    else
    {
        printf("\u001b[31;1mx1 = %lf, x2 = %lf Expected x1 = %lf, x2 = %lf\n"
        "nroot = %d Expected nroot = %d \u001b[0m\n", root_fake.x1, root_fake.x2, unit.x1_exp, unit.x2_exp,
        root_fake.nroot, unit.nroot_exp);
    }
}

