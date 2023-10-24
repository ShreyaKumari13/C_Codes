//to count the length of string using functions
#include<stdio.h>
#include <string.h>
int main(){
    char string[40];
    int i=0;
    printf("Enter the string1 : ");
    gets(string);
    int a = strlen(string);
    printf("The length of the string is %d",a);
    return 0;
}