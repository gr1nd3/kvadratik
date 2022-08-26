
#include "header.h"
#include "core.cpp"
#include "test.cpp"

int main()
{


    enum Sol number_of_roots = NO_SOLUTION;
    enum Comp moreless = EQUAL;

    double a = 0; double b = 0;
    double c = 0;
    double x1 = 0; double x2 = 0;
    int test_regular = 0;


    printf ("Select the program operation mode \n |0| - Test Program, |1| - Regular program \n");
    scanf ("%d", &test_regular);
    if (test_regular == 1)
    {
        input_coefficient (&a, &b, &c);

        if (compare_zero (a, 0) == EQUAL)
        {
            linear_equation (b, c, &x1, &x2, &number_of_roots);
        }


        else
        {
            quadratic_equation (a, b, c, &x1, &x2, &number_of_roots);
        }

        output_solutions (x1, x2, number_of_roots);

    }
    else if (test_regular == 0)
    {
        test_file_scan ();

    }

    else
    {
    printf ("Unknown mode selected");
    }

    return 0;
}








