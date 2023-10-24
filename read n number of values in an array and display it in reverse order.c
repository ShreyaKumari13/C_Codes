/*2. Write a program in C to read n number of values in an array and display it in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int m;
    int arr[100];
    printf("Enter the number of frequency requred:");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        printf("element at %d is:",i);
        scanf("%d",&arr[i]);
    }
    for(int i=m-1;i>=0;i--){
        printf("%d",arr[i]);
    }

    return 0;
}