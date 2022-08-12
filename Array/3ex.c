// program to print all negative/positive elements in array
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i, N;

    printf("Enter size of the Array:");
    scanf("%d", &N);

    printf("Enter size in Element:");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nall negetive element in Array are:");
    for (i = 0; i < N; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d,", arr[i]);
        }
       
    }

    printf(" \nall positive element in Array are:");
    for (i = 0; i < N; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d,", arr[i]);
        }
       
    }
    return 0;
}