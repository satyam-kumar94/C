#include<stdio.h>
int main(){
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    if(age<18){
        printf("you are under 18,you cannot drive");
    }
    else{
        printf("you can drive");
    }
    return 0;

}
