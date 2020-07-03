#include <stdio.h>

int main()
{
    int num, sum2=0, sum3=0, sum4=0;
do {
    scanf ("%d", &num);
    if (num>=10 && num<=99 && num%10==3)
    sum2=sum2+1;
    if (num>=100 && num<=999 && num%10==7)
    sum3=sum3+1;
    if (num>=1000 && num<=9999 && num%10==9)
    sum4=sum4+1;
    }
while (num !=0);
printf ("%d %d %d", sum2, sum3, sum4);
    return 0;
}
