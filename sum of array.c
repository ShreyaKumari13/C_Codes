//sum of array
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4};
    int arr1[]={5,6,7,8};
    for(int i=0;i<4;i++){
        printf("The sum of the arr %d and arr1 %d is %d\n",arr[i],arr1[i],arr[i]+arr1[i]);
    }
    return 0;
}