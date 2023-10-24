//greatest number
#include<stdio.h>
int main(){
    int b,a;
    printf("Enter the number1: ");
    scanf("%d",&a);
    printf("Enter the number2: ");
    scanf("%d",&b);
    if (a>b){
        printf("The  number1 is greater than number2");
    }
    else{
        printf("The number2 is greater than number1");
    }
    return 0;
}