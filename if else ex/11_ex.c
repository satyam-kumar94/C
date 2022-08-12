// C program to print number of days in a month using logical operator
#include <stdio.h>
int main()
{
    int month;
    printf("enter month number (1-12)");
    scanf("%d", &month);
    // Group all 31 days conditions together using logical OR operator
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("31 days");
    }
    // group all 30 days
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("30 days");
    }
    else if(month==2){
        printf("28 or 29 days");
    }
    else
    {
        printf("invalid month! please enter between 1-12");
    }
    return 0;
}