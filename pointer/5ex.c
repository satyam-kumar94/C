// Program to reverse an array using pointers
#include <stdio.h>
#define MAX_SIZE 100
void printArr(int *arr, int size);

int main()
{
    int arr[MAX_SIZE];
    int size;
    int *left = arr;
    int *right;

    printf("enter size of array:");
    scanf("%d", &size);

    right = &arr[size - 1];
    printf("enter element in array:");
    while (left <= right)
    {
        scanf("%d", left++);
    }
    printf("\nArray before reverse:");
    printArr(arr, size);

    left = arr;
    // Swap element from left of array to right of array.

    while (left < right)
    {
        *left ^= *right;
        *right ^= *left;
        *left ^= *right;
        // Increment left array pointer and decrement right array pointer
        left++;
        right--;
    }
    printf("Array after reverse:");
    printArr(arr, size);
    return 0;
}

// Function to print array using pointer.
//  * @arr     Pointer to array.
//  * @size    Size of the array

void printArr(int *arr, int size)
{
    int *arrEnd = (arr + size - 1);
    while (arr <= arrEnd)
    {
        printf("%d,", *arr);
        arr++;
    }
}