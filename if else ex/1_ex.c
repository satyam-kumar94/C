// Write a C program to find maximum between two numbers.
#include <stdio.h>
int main()
{
    int num1, num2, max;
    printf("enter two number");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
        printf("%d is maximum\n", max);
    }
    return 0;
}