//reverse of a number
#include<stdio.h>
int main(){
    int num,digit,rev=0;
    printf("Enter the number:");
    scanf("%d",&num); 
    while(num>0){
        digit = num%10;
        rev = rev*10+digit;
        num=num/10;
    }
    printf("The reverse of the numbers is %d",rev);
    return 0;
}