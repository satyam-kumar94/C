// C program to print day name of week
#include <stdio.h>
int main()
{
    int week;
    printf("enter week number (1-7)");
    scanf("%d", &week);
    if (week == 1)
    {
        printf("monday");
    }
    else if (week == 2)
    {
        printf("tuesday");
    }
    else if (week == 3)
    {
        printf("wednesday");
    }
    else if (week == 4)
    {
        printf("thursday");
    }
    else if (week == 5)
    {
        printf("friday");
    }
    else if (week == 6)
    {
        printf("saturday");
    }
    else if (week == 7)
    {
        printf("sunday");
    }
    else
    {
        printf("invalid input! please enter week number between 1-7");
    }
    return 0;
}