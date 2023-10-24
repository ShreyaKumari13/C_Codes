//pointers print address 
#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    int *ptr[5] = {a,a+1,a+2,a+3,a+4};
    for(int i=0;i<5;i++){
        printf("%d stored at address %u\n",*ptr[i],ptr[i]);
    }
    return 0;
}