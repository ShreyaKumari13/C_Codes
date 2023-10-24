//to copy the string using functions
#include<stdio.h>
#include <string.h>
int main(){
    char string[40],ch[20];
    printf("Enter the string1 : ");
    gets(string);
    strcpy(ch,string);
    printf("The string is %s",ch);
    return 0;
}