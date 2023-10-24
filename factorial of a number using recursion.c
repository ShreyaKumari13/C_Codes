//factorial of a number using recursion
#include<stdio.h>
int factorial(int num){
    if(num<0){
        return -1;
    }
    else if(num==0 || num==1){
        return 1;
    }
    else{
        return (num*factorial(num-1));
    }
}
int main(){
    int num,value;
    printf("Enter the value of num:");
    scanf("%d",&num);
    value = factorial(num);
    printf("The factorial of %d is %d",num,value);
    return 0;
}

