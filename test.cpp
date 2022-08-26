
#ifndef TEST_CPP
#define TEST_CPP

#include "core.cpp"
#include "header.h"

void check_test (double s_x1, double s_x2, int num,
                 double s_x1_t, double s_x2_t, int num_t,
                 int* counter, int* error_counter, int i)
{

    if ((compare_zero (num_t, num) == EQUAL) && (compare_zero (s_x1_t, s_x1) == EQUAL)
                                             && (compare_zero (s_x2_t, s_x2) == EQUAL))
    {
        (*counter)++;
        printf ("TEST #%d: CHECKED \n", i);
    }

    else if ((compare_zero (num_t, num) == EQUAL)
        && (compare_zero (s_x1_t, s_x2) == EQUAL)
        && (compare_zero (s_x2_t, s_x1) == EQUAL))
    {
        (*counter)++;
        printf ("TEST #%d: CHECKED \n", i);
    }
    else
    {
        (*counter)++;
        (*error_counter)++;
        printf ("TEST #%d: ERROR \n", i);
    }
}



void test_output (int counter, int error_counter)
{
    printf ("TEST RESULTS: %d of %d error answers", error_counter, counter);
}

void test_file_scan (void)
{

    int counter = 0;
    int error_counter = 0;

    int amount_of_test = 0;
    FILE *fp = NULL;
    fp = fopen ("test values.txt", "r");

    fscanf (fp, "%d", &amount_of_test);

    for (int i = 1; i <= amount_of_test; i++)
    {
        double s_a = 0, s_b = 0, s_c = 0;
        double s_x1 = 0, s_x2 = 0;
        double s_x1_t = 0, s_x2_t = 0;
        enum Sol num_t = NO_SOLUTION;
        enum Sol num = NO_SOLUTION;

        fscanf (fp, "%lf %lf %lf %d %lf %lf",&s_a, &s_b, &s_c, &num, &s_x1, &s_x2);

        if (compare_zero (s_a, 0) == EQUAL)
        {
            linear_equation (s_b, s_c, &s_x1_t, &s_x2_t, &num_t);
            check_test (s_x1, s_x2, num, s_x1_t, s_x2_t,
             num_t, &counter, &error_counter, i);
        }

        else
        {
            quadratic_equation (s_a, s_b, s_c, &s_x1_t, &s_x2_t, &num_t);
            check_test (s_x1, s_x2, num, s_x1_t, s_x2_t,
             num_t, &counter, &error_counter, i);
        }
    }
    test_output (counter, error_counter);
}

#endif
