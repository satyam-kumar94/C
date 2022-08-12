// C program to all natural numbers in reverse in given range
#include <stdio.h>
int main()
{
    int i, start, end;
    printf("enter starting value");
    scanf("%d", &start);
    printf("enter end value");
    scanf("%d", &end);
    //  Run loop from 'start' to 'end' and
    //   decrement by 1 in each iteration
    for (i = start; i >= end; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}