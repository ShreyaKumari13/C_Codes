//smallest number between 3 numbers
#include<stdio.h>
int main(){
    int num,num2,num3;
    printf("Enter the num:");
    scanf("%d",&num);
    printf("Enter the num2:");
    scanf("%d",&num2);
    printf("Enter the num3:");
    scanf("%d",&num3);
    if(num<num2){
        if(num<num3){
            printf("%d is smallest",num);
        }
        else{
            printf("%d is smallest",num3);
        }
    }
    else if (num2<num){
        if(num2<num3){
            printf("%d is smallest",num2);
        }
        else{
            printf("%d is smallest",num3);
        }
    }
    else if (num3<num2){
        if(num3<num){
            printf("%d is smallest",num3);
        }
        else{
            printf("%d is smallest",num);
        }
    }
    return 0;
}