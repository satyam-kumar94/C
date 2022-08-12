// C program to find reverse of a number
#include <stdio.h>
int main()
{
    int num, reverse = 0;
    printf("enter any number to find reverse");
    scanf("%d", &num);
    // Repeat the till 'num' becomes 0
    while (num != 0)
    {
        // Increase place value of reverse and
        //  * add last digit to reverse
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }
    printf("Reverse=%d", reverse);
    return 0;
}