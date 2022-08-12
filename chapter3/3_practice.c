// Write a program to find the grade of a student given his marks based on below:

// 90-	A
// 80-	B
// 70-	C
// 60-	D
// <70	F
#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks");
    scanf("%d", &marks);
    if (marks > 90)
    {
        printf("grade-A\n");
    }
    else if (marks > 80)
    {
        printf("grade-B\n");
    }
    else if (marks > 70)
    {
        printf("grade-c\n");
    }
    else
    {
        printf(" grade-D\n");
    }
    return 0;
}
