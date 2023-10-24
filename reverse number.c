//reverse number
#include<stdio.h>
int main(){
    int num,rev=0,dig;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num>0){
        dig=num%10;
        num=num/10;
        rev=rev*10+dig;
    }
    printf("The value of reversed number is: %d",rev);
    return 0;
}