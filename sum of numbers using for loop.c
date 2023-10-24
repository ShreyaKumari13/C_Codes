//sum of numbers
#include<stdio.h>
int main(){
    int sum=0,num;
    printf("Enter the number:");
    scanf("%d",&num); 
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    printf("The sum of the numbers is %d",sum);
    return 0;
}