//address of the pointer variable
#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    int *ptr;
    ptr = a;
    for (int i=0;i<5;i++){
        printf("The address %u\n",ptr++);
    }
    return 0;
}
