// Header file

#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <assert.h>


enum Comp
{
    LESS = -1,
    EQUAL = 0,
    MORE = 1,
};


enum Sol
{
    INFINITY_SOLUTION = -1,
    NO_SOLUTION = 0,
    ONE_SOLUTION = 1,
    TWO_SOLUTION = 2
};

enum Comp compare_zero (double x, double y);
void input_coefficient (double *k_a, double *k_b, double *k_c);
void linear_equation (double b, double c, double* p_x1, double* p_x2, enum Sol* p_number_of_roots);
void quadratic_equation (double a, double b, double c, double* x1, double* x2, enum Sol* number_of_roots);
void ouput_solutions (double x1, double x2, int number_of_roots);
void test_file_scan (void);
void check_test (double s_x1, double s_x2, int num,
 double s_x1_t, double s_x2_t, int num_t, int* counter, int* error_counter, int i);
void test_output (int counter, int error_counter);

#endif // HEADER_H_INCLUDED
