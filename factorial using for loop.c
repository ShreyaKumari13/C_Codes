//Factorial using for loop
#include<stdio.h>
int main(){
    int fact=1,num;
    printf("Enter the number:");
    scanf("%d",&num); 
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    printf("The factorial of the numbers is %d",fact);
    return 0;
}