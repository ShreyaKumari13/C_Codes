//concatenating a string using functions
#include<stdio.h>
#include <string.h>
int main(){
    char string[40],ch[20];
    printf("Enter the string1 : ");
    gets(string);
    printf("Enter the string2 : ");
    gets(ch);
    strcat(string,ch);
    printf("The string is %s",string);
    return 0;
}