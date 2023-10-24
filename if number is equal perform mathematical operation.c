//If number is equal perform mathematical operation
#include<stdio.h>
int main(){
    int num,num2;
    printf("Enter the num:");
    scanf("%d",&num);
    printf("Enter the num2:");
    scanf("%d",&num2);
    if(num==num2){
        printf("ADDITION : %d\n",num+num2);
        printf("SUBTRACTION : %d\n",num-num2);
        printf("MULTIPLICATION : %d\n",num*num2);
        printf("DIVISION : %d",num/num2);
    }
    else{
        printf("The num is not equal");
    }
    return 0;
}