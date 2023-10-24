//sum and avg of given number
#include<stdio.h>
int main(){
    int arr[5],sum=0,avg;
    for(int i=0;i<5;i++){
        printf("Enter the number:");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/5;
    printf("The sum of the number is %d\n",sum);
    printf("The avg of the number is %d",avg);
    return 0;
}