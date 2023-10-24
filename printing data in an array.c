//printing data in an array
#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("Enter the marks of student %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("The marks of the student %d is %d\n",i+1,arr[i]);
    }

    return 0;
}