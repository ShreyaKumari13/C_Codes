//to print pow and sin of a given number
#include<stdio.h>
#include<math.h>
int main(){
    int x,y,z;
    printf("Enter the value of x:");
    scanf("%d",&x);
    y = pow(2,x);
    z = sin(x);
    printf("Y = %d \n",y);
    printf("Z = %d \n",z);
    return 0;
}