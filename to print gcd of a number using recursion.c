//to print gcd of a number using recursion
#include<stdio.h>

int gcd(int num,int num2){
    if(num2==0){
        return num;
    }
    else if(num2>num){
        return gcd(num2,num);
    }
    else{
        return gcd(num2,num%num2);
    }
}

int main(){
    int num,num2,value;
    printf("Enter the value of num:");
    scanf("%d",&num);
    printf("Enter the value of num2:");
    scanf("%d",&num2);
    value = gcd(num,num2);
    printf("The factorial of %d is %d",num,value);
    return 0;
}

