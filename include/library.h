#ifndef LIBRARY_HEADER
#define LIBRARY_HEADER

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

enum prog_errors  // fix P
{
    NO_ERRORS = 0,
    ERROR_WRONG_COEFFS = 1,
};

enum number_roots // fix N
{
    INF_ROOTS = -1,
    NO_ROOTS,
    ONE_ROOT,
    TWO_ROOTS,
};

struct Test               // массив с элеманетамми типа структуры
{
    double a_test;
    double b_test;
    double c_test;

    double x1_exp;
    double x2_exp;
    int nroot_exp;

    number_roots nroot;
};

struct Coeff            //переменная coef
{
    double a;
    double b;
    double c;
};

struct Answer          //переменная root
{
    number_roots nroot;
    double x1;
    double x2;
};

#endif /* LIBRARY_HEADER */
