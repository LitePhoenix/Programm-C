/*Задать массив из 3 элементов, посчитать сумму значений элементов массива на главной диагонале и вывести результат на монитор*/

int main()
{   const int arr_size = 3;
    int a[arr_size][arr_size];
    int i, j, sum=0;
    printf ("Введите значения элементов массива: ");
    for (i = 0; i<arr_size; i++) 
  {
    for (j = 0; j<arr_size; j++)
    {    
    scanf ("%d", &a[i][j]);
    printf ("%8d", a[i][j]);
    if (i==j)
    {
      sum=sum+a[i][j];  
    }
    }
    printf ("\n");
  }
    printf("Сумма элементов на главной диагонале: %d ", sum);
    return 0;
}
