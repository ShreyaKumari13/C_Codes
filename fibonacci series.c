//fibonacci series
#include<stdio.h>
int main(){
    int a,b,num,i=3,c;
    printf("Enter the num:");
    scanf("%d",&num);
    a=0,b=1;
    printf("%d %d ",a,b);
    while(i<=num){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i=i+1;
    }
    return 0;
}