#include <stdio.h>
#include <locale.h>
#include <math.h>

#include "core.cpp"

void input_koef (double *k_a, double *k_b, double *k_c);
void lin_ur (double b, double c);
void kvadr_ur (double a, double b, double c);

    int main()
{

double a = 0, b = 0, c = 0;


input_koef (&a, &b, &c);

     if (a == 0)
     lin_ur (b, c);


     else
     kvadr_ur (a, b, c);


return 0;
}








