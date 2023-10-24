//factorial of a number using 2 ways
#include<stdio.h>
int factorial(int a){
    int fact = 1;
    for(int i=1;i<=a;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int a;
    printf("Enter the number for factorial: ");
    scanf("%d",&a);
    printf("The factorial of the number is %d",factorial(a));
    return 0;
}

#include<stdio.h>
int factorial(int a){
    int fact = 1;
    if (a==0){
        return 1;
    }
    else{
        fact = a*factorial(a-1);
    }
    return fact;
}
int main(){
    int a;
    printf("Enter the number for factorial: ");
    scanf("%d",&a);
    printf("The factorial of the number is %d",factorial(a));
    return 0;
}