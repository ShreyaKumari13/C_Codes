/*4. Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12*/
#include<stdio.h>

int main(){
    int m;
    int arr1[100];
    int arr2[100];
    printf("Enter the number of frequency requred:");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        printf("element at %d is:",i);
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<m;i++){
        arr2[i] = arr1[i];
    }
    printf("Array2!!!\n");
    for(int i=0;i<m;i++){
        printf("element at %d is : %d\n",i,arr2[i]);
    }
    return 0;
}