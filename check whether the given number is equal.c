//to check whether the given number is equal
#include<stdio.h>
int main(){
    int num,num2;
    printf("Enter the num:");
    scanf("%d",&num);
    printf("Enter the num2:");
    scanf("%d",&num2);
    while(num==num2){
        printf("%d and %d are equal",num,num2);
        break;
    }
    return 0;
}