//sum of digits
#include<stdio.h>
int main(){
    int num,sum=0,dig;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num>0){
        dig=num%10;
        num=num/10;
        sum=sum+dig;
    }
    printf("The value of reversed number is: %d",sum);
    return 0;
}