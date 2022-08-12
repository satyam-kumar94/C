// program to delete an element from array at specified position
#include<stdio.h>
#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE];
    int i,size,pos;

    printf("enter size of the array:");
    scanf("%d",&size);

    printf("enter element in array:");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter the element position to delete:");
    scanf("%d",&pos);

    if(pos<0 )
    
}