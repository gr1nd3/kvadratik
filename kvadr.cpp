#include <stdio.h>
#include <locale.h>
#include <math.h>
    int main()
{
setlocale (LC_ALL, "Rus");

const double DISK = 0.0001;

double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;
int prod = 1, chikl = 0, pustm = 0;

printf("������� ������������ ����������� ���������. \n");
chikl = scanf("%lf %lf %lf", &a, &b, &c);

while (chikl != 3)
    {
    printf("��������� ������ ����������. ��������� ����. \n");
    fflush(stdin);
    chikl = scanf("%lf %lf %lf", &a, &b, &c);
    }

 //��� ������ ������ ���-�� ����������� � ������ ����, �� ������ �������� �� ������� x1, x2 � pustm - ����������, ������������ ���������� ������

d = b * b - 4 * a * c;                     // ��� �����, �������������� ���� ����� ������

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


 //�� ���� �� �� �������� �....


if (pustm == 0)
printf ("��������� �� ����� ������������ �������");

if (pustm == 1)
printf ("��������� ����� ���� ������������ ������� - x1 = %.2f", x1);

if (pustm == 2)
printf ("��������� ����� ��� ������������ ������� - x1 = %.2f, x2 = %.2f", x1, x2);

return 0;
}
