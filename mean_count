/*Пользователь вводит n чисел. Вывести среднее всех нечётных чисел c точностью одна цифра после запятой.
Пример входных данных:
5
9 50 3 7 42
Пример выходных данных:
6.3*/

#include <stdio.h>

int main()
{
    int n,m,k,sum=0;
    float mean, count=0;
    printf ("Введите количество чисел: ");
    scanf ("%d", &n);
    for (k=0; k<n; k++)
    {
        scanf ("%d", &m);
        if (m%2!=0)
        {
            sum=sum+m;
            count=count+1;
        }
    }
    mean=sum/count;
    printf ("Среднее значение введённых чисел: %.1f", mean);
    return 0;
}
