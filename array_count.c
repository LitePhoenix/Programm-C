/*Создать массив из 10 целых чисел, заполнить его значениями, считанными с клавиатуры. Посчитать количество чисел, кратных 5.*/

#include <stdio.h>

int main()
{
    int a[10];
    int i, count=0;
    for (i = 0; i<10; i++) 
  {
    scanf("%d", &a[i]);
    if(a[i]%5==0)
    count=count+1;
  }
    printf("%d", count);
    return 0;
}
