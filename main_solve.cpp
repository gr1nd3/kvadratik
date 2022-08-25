
#include "core.cpp"
#include "header.h"


int main()
{
    enum Sol number_of_roots = NO_SOLUTION;
    enum Comp moreless = EQUAL;

    double a = 0; double b = 0;
    double c = 0;
    double x1; double x2;


    input_coefficient (&a, &b, &c);

    if (compare_zero (a) == EQUAL)
    {
        linear_equation (b, c, &x1, &number_of_roots);
    }


    else
    {
        quadratic_equation (a, b, c, &x1, &x2, &number_of_roots);
    }

    output_solutions (x1, x2, number_of_roots);

    return 0;
}








