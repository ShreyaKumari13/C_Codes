//printing data of two arrays together
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};
    for(int i=0;i<5;i++){
        printf("The sum of the marks is :%d\n",arr[i]+arr2[i]);
    }

    return 0;
}