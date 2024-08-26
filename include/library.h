/*!
\file
    \brief MAin header file

    It contains description of most classes used in this programm
*/

#ifndef LIBRARY_HEADER
#define LIBRARY_HEADER

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

/// \brief Constant of accuracy of comparing
/// \details Used in compare.cpp

const double ACCURACY = 1e-5;

/// \brief enumeration of errors in fuctions
enum prog_errors  // fix P
{
    NO_ERRORS = 0,
    ERROR_WRONG_COEFFS = 1,
};

/// \brief enumeration of roots of quadratic equation
enum number_roots // fix N
{
    INF_ROOTS = -1,
    NO_ROOTS,
    ONE_ROOT,
    TWO_ROOTS,
};

/// \brief structure with fields describing quadratic equation
/// \details further will be used in array of structures to make input for unit test
struct Test
{
    /// coefficient a (not changing)
    double a_test;
    /// coefficient b (not changing)
    double b_test;
    /// coefficient c (not changing)
    double c_test;
    /// expected first root (not changing)
    double x1_exp;
    /// expected second root (not changing)
    double x2_exp;
    /// expected amount of roots (not changing)
    int nroot_exp;
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
