//multiplication table
#include<stdio.h>
int main(){
    int num2,num;
    printf("Enter the number:");
    scanf("%d",&num); 
    for(int i=1;i<=10;i++){
        num2 = num*i;
        printf("%d * %d = %d\n",num,i,num2);
    }
    return 0;
}