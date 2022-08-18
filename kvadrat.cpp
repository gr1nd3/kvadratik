#include <stdio.h>
#include <ctime>
#include <clocale>
#include <math.h>
int main()
{
setlocale (LC_ALL, "Rus");

float a,b,c,d;
int q=1;

   while (q==1){

    printf("Йоу, введите коэффициенты a, b, c своего квадратного уравнения \n");
        scanf("%f %f %f", &a, &b, &c);
            while (a==0){
                printf("Это не квадратка, мы тут занимаемся серьёзными вещами, повторите ввод \n");
                scanf("%f %f %f", &a, &b, &c);
            }

    d=b*b-4*a*c;

        if(d<0){
                printf("Уравнение не имеет рациональных решений \n");}
        if(d==0){
                printf("Уравнение имеет одно рациональное решение: x=%.2f \n", -b/(2*a));}
        if(d>0){
                printf("Уравнение имеет два рациональных решения: x1=%.2f, x2=%.2f \n", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a) );}

                    printf("Для продолжения сеанса массажа введите 1 \n");
                    scanf("%d",&q);
                }

    return 0;
}
