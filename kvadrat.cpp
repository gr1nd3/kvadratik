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

    printf("���, ������� ������������ a, b, c ������ ����������� ��������� \n");
        scanf("%f %f %f", &a, &b, &c);
            while (a==0){
                printf("��� �� ���������, �� ��� ���������� ���������� ������, ��������� ���� \n");
                scanf("%f %f %f", &a, &b, &c);
            }

    d=b*b-4*a*c;

        if(d<0){
                printf("��������� �� ����� ������������ ������� \n");}
        if(d==0){
                printf("��������� ����� ���� ������������ �������: x=%.2f \n", -b/(2*a));}
        if(d>0){
                printf("��������� ����� ��� ������������ �������: x1=%.2f, x2=%.2f \n", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a) );}

                    printf("��� ����������� ������ ������� ������� 1 \n");
                    scanf("%d",&q);
                }

    return 0;
}
