// C program to check alphabet, digit or special character
#include <stdio.h>
int main()
{
    char ch;
    printf("enter any character");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'B'))
    {
        printf("'%c' is an alphabet", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("'%c' is an digit", ch);
    }
    else
    {
        printf("'%c' is special character", ch);
    }
}