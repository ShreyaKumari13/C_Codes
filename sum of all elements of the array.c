/*3. Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15*/
#include<stdio.h>
int main(){
    int m;
    int arr[100];
    int sum1 = 0;
    printf("Enter the number of frequency requred:");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        printf("element at %d is:",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<m;i++){
        sum1 = sum1+arr[i];
    }
    printf("%d",sum1);
    return 0;
}