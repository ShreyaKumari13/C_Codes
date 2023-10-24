//pointers
#include<stdio.h>
int main(){
    int a,b,x,y;
    int *ptr1,*ptr2;
    a = 10;
    b = 20;
    ptr1 = &a;
    ptr2 = &b;
    x = *ptr1 + *ptr2;
    y = (*ptr2)/(*ptr1);
    printf("The value of X is = %d",x);
    printf("\nThe value of Y is = %d",y);
    *ptr1 = *ptr1 + 10;
    *ptr2 = *ptr2*5;
    printf("\na = %d,b=%d",a,b);
    printf("\na = %d,b=%d",*ptr1,*ptr2);
    return 0;
}