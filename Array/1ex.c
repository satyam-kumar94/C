//prog to print average 
#include <stdio.h>
int main()
{
    int a[10], i, sum = 0;
    float avg;

    printf("Enter 10 Number:");
    for (i = 0; i <= 9; i++)
        scanf("%d", &a[i]);

    for (i = 0; i <= 9; i++)
        sum = sum + a[i];
    avg = sum / 10.0;
    printf("average: is %0.2f", avg);
    return 0;
}