//gcd and lcm of two numbers
#include<stdio.h>
int main(){
    int n,m,temp;
    printf("Enter the first number: ");
    scanf("%d",&m);
    printf("Enter the second number: ");
    scanf("%d",&n);
    temp = m*n;
    while(m!=n){
        if (m>n){
            m=m-n;
        }
        else{
            n=n-m;
        }
    }
    printf("GCD %d\n",n);
    printf("LCM %d",temp/n);
    return 0;
}