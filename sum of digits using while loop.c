//sum of digits
#include<stdio.h>
int main(){
    int digit,sum=0,num;
    printf("Enter the number:");
    scanf("%d",&num); 
    do{
        digit=num%10;
        printf("%d\n",digit);
        sum=sum+digit;
        num=num/10;
    }while(num!=0);
    printf("The sum of the numbers is %d",sum);
    return 0;
}