//swap value by using pointers
#include<stdio.h>
void swap(int *i,int *j){
    int t;
    t = *i;
    *i = *j;
    *j = t;
}
int main(){
    int a,b;
    a=2,b=3;
    printf("The value of a is %d and b is %d\n",a,b);
    swap(&a,&b);
    printf("The value of a is %d and b is %d",a,b);
    return 0;
}