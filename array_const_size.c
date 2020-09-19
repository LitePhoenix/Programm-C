/*Задать массив из 8 элементов, осортировать значения элементов массива от меньшего к большему и вывести результат на монитор*/

#include <stdio.h>

int main()
{   const int arr_size = 8;
    int a[arr_size];
    int i, k, l, buf;
    printf ("Введите значения элементов массива: ");
    for (i=0; i<arr_size; i++)
    {
        scanf ("%d", &a[i]); // "Цикл для заполнения значений элементов массива"//
    }    
    for (k=0; k<arr_size; k++)     // "Циклы для сортировки значений элементов массива"//
    {
        for (l=0; l<arr_size-1; l++)  // "Циклы для сортировки значений элементов массива"//
        {
            if (a[l]>a[l+1])
            {
                buf=a[l];
                a[l]=a[l+1];
                a[l+1]=buf;
            }
        }
    }
    printf ("Вывод отсортированных значений элементов массива: ");
    for (i=0; i<arr_size; i++)
    {
        printf ("%d ", a[i]);
    }
    return 0;
}