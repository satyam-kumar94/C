//  C program to check even or odd number
#include <stdio.h>
int main()
{
    int num;
    printf("enter any number to check even or odd");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("the number is even ");
    else
        printf("the number is odd ");
    return 0;
}