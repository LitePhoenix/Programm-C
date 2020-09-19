/* Команды: 0 - выход;
            1 - сумма элементов на главной диагонале;
            2 - среднее значение элементов матрицы;
            3 - максимальное значение элементов матрицы;
            4 - минимальное значение элементов матрицы;
            5 - изменение значения элемнта матрицы;
            6 - сохранение результата в файл;
            7 - показать матрицу.
*/

#include <stdio.h>


const int arr_size = 3;

void data()
{
    printf ("Здесь находится описание программы:\nкоманда 0 - выход;\nкоманда 1 - сумма элементов на главной диагонале;\n");
    printf ("команда 2 - среднее значение элементов матрицы;\nкоманда 3 - наибольшее значение элементов матрицы;\n");
    printf ("команда 4 - наименьшее значение элементов матрицы;\nкоманда 5 - изменение значения элемента матрицы;\n");
    printf ("команда 6 - сохранить результат в файл;\nкоманда 7 - траспонировать матрицу.\n");
}

void print_matrix(int mat[arr_size][arr_size])
{
    int i,j;
    for (i = 0; i<arr_size; i++) 
    {
        for (j = 0; j<arr_size; j++)
        {    
            printf ("%6d", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{   
    int a[arr_size][arr_size];
    int i, j, max=0, sum=0, min, file, command;
    float mean, count=0;
    data();
    printf ("Введите значения элементов массива: ");
    for (i = 0; i<arr_size; i++) 
  {
    for (j = 0; j<arr_size; j++)
    {    
    scanf ("%d", &a[i][j]);
    printf ("%6d", a[i][j]);
    }
    printf ("\n");
  }
    command=1;
    while (command!=0)
    {
        printf ("Введите номер команды: ");
        scanf ("%d", &command);
        sum=0;
        if (command==1)
        {
           for (i = 0; i<arr_size; i++) 
           {
               for (j = 0; j<arr_size; j++)
               {
                   if (i==j)
                   sum=sum+a[i][j];
               }
           }
           printf ("Сумма элементов на главной диагонале: %d\n", sum);
           print_matrix(a);
        }
        sum=0;
        if (command==2)
        {
           for (i = 0; i<arr_size; i++) 
           {
               for (j = 0; j<arr_size; j++)
               {
                   sum=sum+a[i][j];
                   count=count+1;
               }
           }
           mean=sum/count;
           printf ("Среднее значение элементов матрицы: %.1f\n", mean);
           print_matrix(a);
        }
        if (command==3)
        {
           for (i = 0; i<arr_size; i++) 
           {
               for (j = 0; j<arr_size; j++)
               {
                   if (a[i][j]>max)
                   max=a[i][j];
               }
           }
           printf ("Максимальное значение элементов матрицы: %d\n", max);
           print_matrix(a);
        }
        min=a[0][0];
        if (command==4)
        {
           for (i = 0; i<arr_size; i++) 
           {
               for (j = 0; j<arr_size; j++)
               {
                   if (a[i][j]<min)
                   min=a[i][j];
               }
           }
           printf ("Минимальное значение элементов матрицы: %d\n", min);
           print_matrix(a);
        }
        if (command==5)
        {
           printf ("Введите индексы матрицы: \n");
           scanf ("%d", &i);
           scanf ("%d", &j);
           printf ("Введите новое значение элемента матрицы: \n");
           scanf ("%d", &a[i][j]);
           print_matrix(a);
        }
    }
    return 0;
}
