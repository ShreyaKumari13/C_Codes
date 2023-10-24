//factorial of a number
#include<stdio.h>
int main(){
    int i=1,fact=1,num;
    printf("Enter the number:");
    scanf("%d",&num); 
    while(i<=num){
        fact*=i;
        i++;
    }
    printf("The factorial of the numbers is %d",fact);
    return 0;
}