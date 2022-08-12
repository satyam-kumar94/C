// C program to check whether a triangle is valid or not using logical AND operator
#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("enter three side of traingle\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    // Input all three sides of a triangle
    if((side1 + side2 >side3) && (side1+side3>side2) && (side2+side3>side1)){
        printf("traingle is valid");
    }
    else{
        printf("traingle is not valid");
    }
    return 0;
}