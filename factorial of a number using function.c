//factorial of a number using function
#include<stdio.h>
int factorial(int num){
    int i,f=1;
    for(int i=1;i<=num;i++){
        f=f*i;
    }
    return f;
}

int main(){
    int num;
    printf("Enter the value of num:");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,factorial(num));
    return 0;
}

