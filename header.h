// Header file

#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <assert.h>
#include <stdbool.h>


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

enum Comp compare_zero (double x);
void input_coefficient (double *k_a, double *k_b, double *k_c);
void linear_equation (double b, double c, double* x1, int* number_of_roots);
void quadratic_equation (double a, double b, double c, double* x1, double* x2, int* number_of_roots);
void ouput_solutions (double x1, double x2, int number_of_roots);

#endif // HEADER_H_INCLUDED
