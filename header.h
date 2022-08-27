// Header file


#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <txlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <assert.h>


//{----------------------------------------------------------------------------
//! Convenient notation for the result of comparing floating-point numbers
//}----------------------------------------------------------------------------

enum Comp
{
    LESS = -1,
    EQUAL = 0,
    MORE = 1,
};


//{----------------------------------------------------------------------------
//! Convenient notation for the number of solutions to an equation
//}----------------------------------------------------------------------------

enum Sol
{
    //!
    INFINITY_SOLUTION = -1,
    NO_SOLUTION = 0,
    ONE_SOLUTION = 1,
    TWO_SOLUTION = 2
};


//{----------------------------------------------------------------------------
//! This function compares two values
//!
//! @param x - 1st value
//! @param y - 2nd value
//!
//! @return LESS, if x < y, MORE, if x > y and EQUAL, if x is comparable to y with the given precision HALFLING
//}----------------------------------------------------------------------------

enum Comp compare_zero (double x, double y);


//{----------------------------------------------------------------------------
//! This function is responsible for entering the coefficients of the quadratic equation, and also checks the correctness of the data entered
//!
//! @param k_a - leading coefficient of the quadratic equation
//! @param k_b - mean coefficient of the quadratic equation
//! @param k_c - minor coefficient of the quadratic equation
//}----------------------------------------------------------------------------

void input_coefficient (double *k_a, double *k_b, double *k_c);


//{----------------------------------------------------------------------------
//! This function solves the equation if it is linear
//!
//! @param b    - coefficient at x of the linear equation
//! @param c    - free coefficient
//! @param p_x1 - first root of the equation
//! @param p_x2 - second root of the equation (always zero)
//!
//}----------------------------------------------------------------------------

void linear_equation (double b, double c, double* p_x1, double* p_x2, enum Sol* p_number_of_roots); //!


//{----------------------------------------------------------------------------
//! This function solves the equation if it is quadratic
//! @param a                     - coefficient at x^2 quadratic equation
//! @param b                     - coefficient at x of the quadratic equation
//! @param c                     - free coefficient
//! @param x1                    - first root of the equation
//! @param x2                    - second root of the equation
//! @param Sol p_number_of_roots - number of solutions to the equation
//}----------------------------------------------------------------------------

void quadratic_equation (double a, double b, double c, double* x1, double* x2, enum Sol* number_of_roots); //!


//{----------------------------------------------------------------------------
//! This function outputs solutions to the equation
//! @param x1              - first root of the equation
//! @param x2              - second root of the equation
//! @param number_of_roots - number of solutions to the equation
//}----------------------------------------------------------------------------

void ouput_solutions (double x1, double x2, int number_of_roots);


//{----------------------------------------------------------------------------
//! This function is responsible for reading the test data from the file, as well as calculating the roots inside the test
//}----------------------------------------------------------------------------

void test_file_scan (void);


//{----------------------------------------------------------------------------
//! This function compares the values ​​from the test file with the values ​​calculated by the functions linear_equation and quadratic_equation
//! @param s_x1          - the first root of the quadratic equation, taken from the test file
//! @param s_x2          - the second root of the quadratic equation, taken from the test file
//! @param num           - the number of solutions to the equation taken from the test file
//! @param s_x1_t        - the first solution of a quadratic, equation, calculated by the program
//! @param s_x2_t        - the second solution of a quadratic, equation, calculated by the program
//! @param num_t         - the number of solutions to the equation, calculated by the program
//! @param counter       - test counter
//! @param error_counter - failed test counter
//! @param i             - test number
//}----------------------------------------------------------------------------

void check_test (double s_x1, double s_x2, int num,
 double s_x1_t, double s_x2_t, int num_t, int* counter, int* error_counter, int i);


//{----------------------------------------------------------------------------
//! This function displays the result of the tests (the number of erroneous tests out of all)
//! @param counter       - test counter
//! @param error_counter - failed test counter
//}----------------------------------------------------------------------------

void test_output (int counter, int error_counter);


//{----------------------------------------------------------------------------
//! This function creates a heroin mayhem
//}----------------------------------------------------------------------------

void heroine ();

#endif // HEADER_H_INCLUDED
