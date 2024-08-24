#include "input.h"
#include "library.h"

prog_errors coef_input(struct Coeff* coef_ptr)                                           //ввод с клавы
{
    assert(coef_ptr);

    printf("\n");
    printf("Type coeffs in real numbers\u001b[0m\n");
    int trash = -1;
    while(true)
    {
        if (scanf("%lf %lf %lf", &(coef_ptr->a), &(coef_ptr->b), &(coef_ptr->c)) == 3)
            return NO_ERRORS;
        else
            while((trash = getchar()) != '\n' && trash != EOF)
                ;
    }
    assert(false);
    return NO_ERRORS;
}
