#include <stdio.h>
#include <locale.h>
#include <math.h>
    int main()
{
setlocale (LC_ALL, "Rus");

const double DISK = 0.0001;

double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;
int prod = 1, chikl = 0, pustm = 0;

printf("Введите коэффициенты квадратного уравнения. \n");
chikl = scanf("%lf %lf %lf", &a, &b, &c);

while (chikl != 3)
    {
    printf("Введенные данные некоректны. Повторите ввод. \n");
    fflush(stdin);
    chikl = scanf("%lf %lf %lf", &a, &b, &c);
    }

 //тут данные должны как-то отправиться в другой файл, на выходе которого мы получим x1, x2 и pustm - переменную, определяющую количество корней

d = b * b - 4 * a * c;                     // это кусок, обрабатываемый этим самым файлом

    if (d < 0)
    {
        pustm = 0;
    }

    if (fabs(d) < DISK )
    {
        x1 = -b / (2 * a);
        pustm = 1;
    }

    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        pustm = 2;
    }


 //ну типо мы их получили и....


if (pustm == 0)
printf ("Уравнение не имеет рациональных решений");

if (pustm == 1)
printf ("Уравнение имеет одно рациональное решение - x1 = %.2f", x1);

if (pustm == 2)
printf ("Уравнение имеет два рациональных решения - x1 = %.2f, x2 = %.2f", x1, x2);

return 0;
}
