#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


#include <stdio.h>
#include <locale.h>
#include <math.h>

void input_koef (double *k_a, double *k_b, double *k_c);
double lin_ur (double b, double c);
double kvadr_ur (double a, double b, double c);

#endif // HEADER_H_INCLUDED
