//use sizeof function
#include<stdio.h>
int main(){
    int regno[] = {1,2,3,4,5};
    int size = sizeof(regno)/sizeof(int);
    for(int i=0;i<size;i++){
        printf("%d\n",regno[i]);
    }
    return 0;
}