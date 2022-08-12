// calculate the simpleintrest
#include <stdio.h>
int main()
{
    int principle = 1000, rate = 4, year = 1;
    int simpleintrest = (principle * rate * year) / 100;
    // simpleintrest = prd/100
    printf("the value of simpleintrest is %d", simpleintrest);
    return 0;
}