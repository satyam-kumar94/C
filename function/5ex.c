// C program to find maximum and minimum using functions
#include <stdio.h>
// fun declration
int max(int num1, int num2);
int min(int num1, int num2);
int main()
{
    int num1, num2, maximum, minimum;
    printf("enter any two number");
    scanf("%d%d", &num1, &num2);
    // fun call
    maximum = max(num1, num2);
    minimum = min(num1, num2);
    printf("maximum=%d\n", maximum);
    printf("minimum=%d\n", minimum);
    return 0;
}
int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}
int min(int num1, int num2)
{
    return (num1 > num2) ? num2 : num1;
}