//Core file

#include "header.h"




enum Comp compare_zero (double x)
{
    const double HALFLING = 0.0001;

    if (fabs (x) <= HALFLING)
    {
        return EQUAL;
    }

    else if (x < 0)
    {
        return LESS;
    }

    else if (x > 0)
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

void linear_equation (double b, double c, double* p_x1, enum Sol* p_number_of_roots)
{
    if (compare_zero (b) == EQUAL)
    {
        if (compare_zero (c) == EQUAL)
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
        if (compare_zero (c) == EQUAL)
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

}

void quadratic_equation (double a, double b, double c, double* p_x1, double* p_x2, enum Sol* p_number_of_roots)
{
    double d = 0;

    d = b * b - 4 * a * c;

    if (compare_zero (d) == LESS)
    {
        *p_number_of_roots = NO_SOLUTION;
    }

    if (compare_zero (d) == EQUAL)
    {
        *p_number_of_roots = ONE_SOLUTION;
        *p_x1 = -b / (2 * a);
    }

    if (compare_zero (d) == MORE)
    {
        *p_number_of_roots = TWO_SOLUTION;
        *p_x1 = (-b - sqrt(d)) / (2 * a);
        *p_x2 = (-b + sqrt(d)) / (2 * a);
    }

}


void output_solutions (double x1, double x2, enum Sol number_of_roots)
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


