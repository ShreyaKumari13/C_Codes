//printing power of a num using functions 
#include<stdio.h>

int powerofnum(int num,int power){
    int product = 1;
    for(int i=1;i<=power;i++){
        product = product*num;
    }
    return product;
}

int main(){
    int num,power,z;
    printf("Enter the value of num:");
    scanf("%d",&num);
    printf("Enter the value of num:");
    scanf("%d",&power);
    z = powerofnum(num,power);
    printf("The power of num %d is %d",num,z);
    return 0;
}

