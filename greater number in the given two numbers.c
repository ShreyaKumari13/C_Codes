//greater number in the given two numbers
#include<stdio.h>
int main(){
    int num,num2;
    printf("Enter the num:");
    scanf("%d",&num);
    printf("Enter the num2:");
    scanf("%d",&num2);
    if(num>num2){
        printf("%d is greater",num);
    }
    else{
        printf("%d is greater",num2);

    }
    return 0;
}