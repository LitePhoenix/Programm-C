/*Пользователь вводит 5 целых чисел. Вывести среднее.
Пример входных данных:
0 3 4 12 2
Пример выходных данных:
Среднее: 4.2*/

#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    double mean;
    printf ("Введите числа: \n");
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);
    scanf ("%d", &d);
    scanf ("%d", &e);
    mean=(a+b+c+d+e)/5.0;
    printf("Среднее значение = %.1f", mean);
    return 0;
}
