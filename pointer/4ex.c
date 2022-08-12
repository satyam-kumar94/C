// C program to input and print array elements using pointers
#include <stdio.h>
#define MAX_SIZE 100 //max array size
int main()
{
    int arr[MAX_SIZE];
    int N, i;
    int *ptr = arr;
    printf("enter size of array:");
    scanf("%d", &N);

    printf("enter element in array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("array element:");
    for (i = 0; i < N; i++)
    {
        printf("%d,", *(ptr + i));
    }
    return 0;
}