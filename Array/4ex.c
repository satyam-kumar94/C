// program to find sum of all elements of array
#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, n, sum = 0;

    printf("Enter size of Array:");
    scanf("%d", &n);

    printf("Enter %d Element in the Array:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("sum of all element of Array =%d", sum);
    return 0;
}