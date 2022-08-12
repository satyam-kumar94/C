// C program to display all even numbers from 1 to n without if
// #include <stdio.h>
// int main()
// {
//     int i, n;
//     printf("print all even number till");
//     scanf("%d", &n);
//     printf(" all even number from 1 to %d are\n ", n);
//     for (i = 2; i <= n; i += 2)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }
// 2> C program to display all odd numbers from 1 to n without if
#include <stdio.h>
int main()
{
    int i, n;
    printf("print all even number till");
    scanf("%d", &n);
    printf(" all even number from 1 to %d are\n ", n);
    for (i = 1; i <= n; i += 2)
    {
        printf("%d\n", i);
    }
    return 0;
}