
// C program to find cube of a number using function
#include <stdio.h>
double cube(double num);
int main()
{
    int num;
    double c;
    printf("enter any number");
    scanf("%d", &num);
    c = cube(num);
    printf("cube of %d is %.2f", num, c);
    return 0;
}
double cube(double num)
{
    return (num * num * num);
}