// C program to check whether a character is alphabet or not
#include <stdio.h>
int main()
{
    char ch;
    printf("enter any character");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'z'))
    {
        printf("character is an alphabet");
    }
    else
    {
        printf("character is not alphabet");
    }
    return 0;
}