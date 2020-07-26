/*Пользователь вводит одно число - рассчитать и вывести факториал этого числа.*/

#include <stdio.h>

int main()
{
    int n, k, fac=1;
    printf("Введите число: ");
    scanf("%d", &n);
    for (k=1; k<=n; k++)
    {
        fac=fac*k; 
    }
    printf("Факториал числа равен %d", fac);
    return 0;
}
