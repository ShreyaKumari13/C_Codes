//address and value of the pointer variable
#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    int *ptr;
    ptr = a;
    for(int i=0;i<5;i++){
        printf("Address is = %u ,Value is = %d\n",ptr,*(ptr));
        ptr++;
    }
    return 0;
}