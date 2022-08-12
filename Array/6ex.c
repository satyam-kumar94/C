// C program to insert an element in array at specified position
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i, size, num, pos;

    printf("enter size of the array:");
    scanf("%d", &size);

    printf("enter size in the element:");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter element to ensert:");
    scanf("%d", &num);
    printf("enter the element position:");
    scanf("%d", &pos);

    if (pos > size + 1 || pos <= 0)
    {
        printf("invalid position! please enter position between 1 to %d", size);
    }
    else
    {
        for (i = size; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = num;
        size++;

        printf("array element after insertion:");
        for (i = 0; i < size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}