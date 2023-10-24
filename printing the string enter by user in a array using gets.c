////printing the string enter by user in a array using gets
#include<stdio.h>
int main(){
    char string[40],ch[40];
    printf("Enter the string1 : ");
    gets(string);
    printf("Enter the string2 : ");
    gets(ch);
    printf("The string is %s %s ",string,ch);

    return 0;
}