/*Пользователь вводит два натуральных числа - рассчитать и вывести наибольший общий делитель (НОД) и наименьшее общее кратное (НОК).*/

#include <stdio.h>

int main()
{
    int a, b, a_in, b_in, NOD, NOK;
    printf("Введите два натуральных числа: ");
    scanf("%d %d", &a_in, &b_in);
    a=a_in;
    b=b_in;
    do {
        if  (a>b)
            a=a-b;
        else {
            b=b-a;
             }
        }
    while (a!=b);
    NOD=a;
    printf("НОД: %d\n", NOD);
    a=a_in;
    b=b_in;
    NOK=(a*b)/NOD;
    printf("НОК: %d", NOK);
    return 0;
}
