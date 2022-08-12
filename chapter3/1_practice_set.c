/*Write a program to find out whether a student is pass or fail; if it requires a total of
 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as input from the user.*/
#include<stdio.h>
int main(){
    int physics,chemistry,math;
    float total;
    printf("enter physics marks\n");
    scanf("%d" , &physics);

    printf("enter chemistry marks\n");
    scanf("%d" , &chemistry);

    printf("enter math marks\n");
    scanf("%d" , &math);
    total = (physics + chemistry + math)/3;
    if((total<40) || physics<33|| math<33|| chemistry<33){
        printf("your total percentage is %f and you are fail\n",total);
    }
    else{
        printf("your total percentage is %f and you are pass\n",total);
    }
    return 0;
}
