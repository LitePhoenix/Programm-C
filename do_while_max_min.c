/*
Пользователь вводит последовательность чисел, в которой каждое число лежит в диапазоне [-1000,1000].
Ввод чисел заканчивается при вводе числа 9999. Требуется найти максимальное отрицательное
и минимальное положительное число.
*/

int main()
{
    int num, max=-1000, min=1000;
do {
    scanf ("%d", &num);
    if (num<0 && num>max)
    max=num;
    if (num>0 && num<min)
    min=num;
    }
while (num !=9999);
printf ("Максимальное отрицательное число = %d\nМинимальное положительное число = %d\n", max, min);
    return 0;
}
