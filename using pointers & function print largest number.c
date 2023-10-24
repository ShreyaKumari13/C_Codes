//using pointers & function print largest number
#include<stdio.h>
int *largest(int *a,int *b){
    if(*a>*b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a=10,b=20;
    int *ptr;
    ptr = largest(&a,&b);
    printf("The largest of the number is %d",*ptr);
    return 0;
}