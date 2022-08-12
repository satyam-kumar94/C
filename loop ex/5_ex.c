//  C program to find sum of its digits of a number
#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("enter any number to find sum of digit");
    scanf("%d", &num);
    // Repeat till num becomes 0
    while (num != 0)
    {
        //  Find last digit of num and add to sum
        sum += num % 10;
        //  Find last digit of num and add to sum
        num = num / 10;
    }
    printf("sum of digit = %d", sum);
    return 0;
}
