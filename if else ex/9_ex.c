//  C program to check whether a character is uppercase or lowercase
#include <stdio.h>
int main()
{
    char ch;
    printf("enter any character");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("uppercase alphabet '%c'", ch);
    }
    else if (ch >= 'a' && ch <= 'b')
    {
        printf("lowercase alphabet' %c'", ch);
    }
    else
    {
        printf("not an alphabet' %c'", ch);
    }
    return 0;
}