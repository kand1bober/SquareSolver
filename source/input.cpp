/*!
\file
    \brief compare file
*/

#include "input.h"

/// \brief  input of coefficints to a non-constant structure
/// \param  coef_ptr -- pointer to a variable of structure type with coefficients
/// \return returns --  enum value showing errors
prog_errors coef_input(struct Coeff* coef_ptr)                                           //ввод с клавы
{
    ASSERT(coef_ptr);

    printf("\n");
    printf(WHITE "Type coeffs in real numbers" DELETE_COLOR);
    int trash = -1;
    while(true)
    {
        if (scanf("%lf %lf %lf", &(coef_ptr->a), &(coef_ptr->b), &(coef_ptr->c)) == 3)
            return NO_ERRORS;
        else
            while((trash = getchar()) != '\n' && trash != EOF);
    }
    ASSERT(false);
    return NO_ERRORS;
}
