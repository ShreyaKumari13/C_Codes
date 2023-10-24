//to access pointer
#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    // for(int i=0;i<5;i++){
    //     printf("%u   %d\n",&a[i],a[i]);  ## to access element without using pointer
    // }
    int *ptr;
    ptr = a;
    for(int i=0;i<5;i++){
        printf("The address is: %u ,value is: %d\n",ptr,*ptr++);
        //or it can be written in this manner also
        // ptr++;
    }
    return 0;
}

