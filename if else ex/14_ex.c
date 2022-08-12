//  C program to calculate profit or loss
#include <stdio.h>
int main()
{
    int cp, sp, amt;
    // Input cost price and selling price of a product
    printf("enter cost price");
    scanf("%d", &cp);
    printf("enter selling price");
    scanf("%d", &sp);
    if (sp > cp)
    {
        // calculate profit
        amt = sp - cp;
        printf("profit=%d", amt);
    }
    else if (cp > sp)
    {
        // calculate loss
        amt = cp = sp;
        printf("loss = %d", amt);
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
}