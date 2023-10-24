/*5. Write a program in C to count a total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1*/
#include<stdio.h>

int main(){
    int m,n;
    int arr1[100];
    int sum1 = 0;
    printf("Enter the number of frequency requred:");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        printf("element at %d is:",i);
        scanf("%d",&arr1[i]);
    }
    printf("Enter the number to check for duplicates:");
    scanf("%d",&n);
    for(int i=0;i<m;i++){
        if(n==arr1[i]){
            sum1 = sum1+1;
        }
    }
    printf("The total number of duplicates for the number %d is: %d",n,sum1);
    return 0;
}