/*7. Write a program in C to merge two arrays of same size sorted in decending order.
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1*/
#include<stdio.h>

int main(){
    int array[100], m,array2[100];
    printf("Enter number of elements in array:");
    scanf("%d", &m);
    for(int i=0; i<m; i++){
        printf("Enter the numbers:");
        scanf("%d", &array[i]);
    }

    return 0;
}