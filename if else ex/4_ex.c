// C program to check divisibility of any number
#include <stdio.h>
int main()
{
    int num;
    printf("enter any number");
    scanf("%d", &num);
    if ((num % 5 == 0) && (num % 10 == 0))
        printf("the number is divisible by 5 and 10");
    else
        printf("the number is not divisible by 5 and 10");
}