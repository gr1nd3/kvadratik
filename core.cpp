//Core file


#ifndef CORE_CPP
#define CORE_CPP

#include "header.h"
#include "test.cpp"




enum Comp compare_zero (double x, double y)
{
    const double HALFLING = 0.0001;

    if (fabs (x) < y + HALFLING)
    {
        return EQUAL;
    }

    else if (x < y)
    {
        return LESS;
    }

    else if (x > y)
    {
        return MORE;
    }
}
void input_coefficient (double* k_a, double* k_b, double* k_c)
{
    assert (k_a != NULL);
    assert (k_b != NULL);
    assert (k_c != NULL);


    printf ("Enter the coefficients of the quadratic equation. \n");



    while (scanf ("%lf %lf %lf", k_a, k_b, k_c) != 3)
    {
        while (getchar() != '\n');
        printf("The entered data is incorrect. Try again. \n");
    }

}

void linear_equation (double b, double c, double* p_x1, double* p_x2, enum Sol* p_number_of_roots)
{
    if (compare_zero (b, 0) == EQUAL)
    {
        if (compare_zero (c, 0) == EQUAL)
        {

            *p_number_of_roots = INFINITY_SOLUTION;
        }
        else
        {

            *p_number_of_roots = NO_SOLUTION;
        }
    }
    else
    {
        if (compare_zero (c, 0) == EQUAL)
        {
            *p_number_of_roots = ONE_SOLUTION;
            *p_x1 = 0;
        }

        else
        {
            *p_number_of_roots = ONE_SOLUTION;
            *p_x1 = -c / b;
        }
    }

    *p_x2 = 0;

}

void quadratic_equation (double a, double b, double c, double* p_x1, double* p_x2, enum Sol* p_number_of_roots)
{
    double d = b * b - 4 * a * c;       // discriminant

    if (compare_zero (d, 0) == LESS)
    {
        *p_number_of_roots = NO_SOLUTION;
    }

    if (compare_zero (d, 0) == EQUAL)
    {
        *p_number_of_roots = ONE_SOLUTION;
        *p_x1 = -b / (2 * a);
    }

    if (compare_zero (d, 0) == MORE)
    {
        *p_number_of_roots = TWO_SOLUTION;
        *p_x1 = (-b - sqrt(d)) / (2 * a);
        *p_x2 = (-b + sqrt(d)) / (2 * a);
    }

}


void output_solutions (const double x1, const double x2, enum Sol number_of_roots)
{
    switch (number_of_roots)
    {
        case INFINITY_SOLUTION:
            printf("Infinity solutions \n");
            break;

        case NO_SOLUTION:
            printf("No rational solutions \n");
            break;

        case ONE_SOLUTION:
            printf("The equation has one rational solution: %.2lf \n", x1);
            break;

        case TWO_SOLUTION:
            printf("The equation has two rational solutions: %.2lf, %.2lf \n", x1, x2);
            break;
    }
}

#endif
