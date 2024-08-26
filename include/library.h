/*!
\file
    \brief Main header file

    It contains description of most classes used in this programm
*/

#ifndef LIBRARY_HEADER
#define LIBRARY_HEADER

//#define NDEBUG

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include <stdarg.h>

///string constants for colors
#define DELETE_COLOR "\u001b[0m"
#define GREEN "\u001b[32;1m"
#define RED "\u001b[31;1m"
#define YELLOW "\u001b[33;1m"
#define PURPLE "\u001b[35;1m"
#define WHITE "\u001b[37;1m"
#define BLUE "\u001b[36;1m"
#define SINIY "\u001b[34;1m"
//
// #define PRINT(color, string)     \
// ({                                \
//     printf(color "string");         \
// })                            \               // macro of color printing
//
//

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

/// \brief structure for coefficients of quadratic equation
struct Coeff            //переменная coef
{
    double a;
    double b;
    double c;
};

/// \brief structure for results of solving quadratic equation
struct Answer          //переменная root
{
    number_roots nroot;  /// number of roots
    double x1;           /// first root
    double x2;           /// second root
};

#endif /* LIBRARY_HEADER */
