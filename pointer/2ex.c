// C program to perform all arithmetic operations using pointers
#include<stdio.h>
int main(){
    float num1,num2;  //normal varialbe
    float *ptr1,*ptr2;  //pointer variable

    float sum,diff,mult,div;
    ptr1=&num1;
    ptr2=&num2;
    printf("enter any two real number");
    scanf("%f%f",ptr1,ptr2);

    sum=(*ptr1) + (*ptr2);
    diff=(*ptr1) - (*ptr2);
    mult=(*ptr1) * (*ptr2);
    div=(*ptr1) / (*ptr2);

    printf("sum=%.2f\n",sum);
    printf("diff=%.2f\n",diff);
    printf("mult=%.2f\n",mult);
    printf("div=%.2f\n",div);

    return 0;
}


