//simple interest
#include<stdio.h>
int main(){
    int principle,rate,year,simple;
    printf("Enter the principle:");
    scanf("%d",&principle);    
    printf("Enter the rate:");
    scanf("%d",&rate);    
    printf("Enter the year:");
    scanf("%d",&year);
    simple = ((principle*rate*year)/100);
    printf("The simple interest is %d",simple);
    return 0;
}