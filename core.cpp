#ifndef CORE_CPP
#define CORE_CPP


#include <stdio.h>
#include <locale.h>
#include <math.h>




void input_koef (double *k_a, double *k_b, double *k_c)
{
printf("Enter the coefficients of the quadratic equation. \n");



while (scanf("%lf %lf %lf", &k_a, &k_b, &k_c) != 3)
    {
while (getchar() != '\n'){}

    printf("The entered data is incorrect. Try again. \n");

    }

}

void lin_ur (double b, double c)
{
  if (b == 0)
  {
   printf ("No solutions");
  }
  else if (b == 0 && c == 0)
  {
   printf ("Infinity solutions");
  }
  else
  {
   printf ("The solution is: %.2f", -c / b);
  }

}

void kvadr_ur (double a, double b, double c)
{

double d;

const double DISK = 0.0001;


d = b * b - 4 * a * c;

    if (d < 0)
    {
     printf ("No solutions");
    }

    if (fabs(d) < DISK)
    {
        printf ("The solution is: %.2f", -b / (2 * a));
    }

    if (d > 0)
    {
        printf ("The solutions are: %.2f, %.2f", (-b - sqrt(d)) / (2 * a), (-b + sqrt(d)) / (2 * a));
    }

}



































#endif
