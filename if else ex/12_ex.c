//  C program to check whether a triangle is valid or not if angles are given
#include <stdio.h>
int main()
{
    int angle1, angle2, angle3, sum;
    printf("enter three angle of a triangle \n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
    sum = angle1 + angle2 + angle3;
    //      * If sum of angles is 180 and
    //      * angle1, angle2, angle3 is not 0 then
    //      * triangle is valid.
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        printf("valid traingle");
    }
    else
    {
        printf("invalid traingle");
    }
    return 0;
}