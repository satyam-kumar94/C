// /**
//  * C program to check positive negative or zero using simple if statement
//  */
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("enter any number");
//     scanf("%d", &num);
//     if (num > 0)
//     {
//         printf("number is positive");
//     }
//     if (num < 0)
//     {
//         printf("number is negetive");
//     }
//     if (num == 0)
//     {
//         printf("number is zero");
//     }
//     return 0;
// }

// 2,* C program to check positive negative or zero using if else
#include <stdio.h>
int main()
{
    int num;
    printf("enter  any number");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("number is positive");
    }
    else if (num < 0)
    {
        printf("number is negetive");
    }
    else
    {
        printf("number is zero");
    }
    return 0;
}
