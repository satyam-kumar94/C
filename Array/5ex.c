// C program to count total number of even and odd elements in an array
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i, size, even, odd;

    printf("Enter size of the array:");
    scanf("%d", &size);

    printf("Enter %d element in the array:", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        even = 0;
        odd = 0;
    }
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("total even element:%d\n", even);
    printf("total odd element:%d\n", odd);
    return 0;
}