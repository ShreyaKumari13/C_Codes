//palindrome of a number
#include<stdio.h>
int main(){
    int num,digit,rev=0,temp;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        digit = num%10;
        num = num/10;
        rev = rev*10+digit;
    }
    printf("The reverse value of num is %d\n",rev);
    if(temp==rev){
        printf("The number is palindrome");
    }
    else{
        printf("The number is not palindrome");
    }
    return 0;
}