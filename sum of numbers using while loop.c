//sum of numbers
#include<stdio.h>
int main(){
    int num,sum=0,i=1;
    printf("Enter the number:");
    scanf("%d",&num); 
    while(i<=num){
        sum+=i;
        i++;

    }
    printf("The sum of the numbers is %d",sum);
    return 0;
}