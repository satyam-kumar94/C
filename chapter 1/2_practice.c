#include <stdio.h>
int main()
{
    int length, breadth;
    printf("what is the lenght of rectangle \n");
    scanf("%d", &length);

    printf("what is breadth of rectangle \n");
    scanf("%d", &breadth);

    printf("the area of your rectangle %d", length * breadth);
    return 0;
}