//  C program to get memory address using address of operator
#include <stdio.h>
int main()
{
    int integer = 1;
    char character = 'c';
    float real = 10.4;
    printf("value of integer=%d,address of integer=%u\n", integer, &integer);
    printf("value of character=%c ,address of character=%u\n", character, &character);
    printf("value of real=%f,address of real=%u\n", real, &real);
    return 0;
}