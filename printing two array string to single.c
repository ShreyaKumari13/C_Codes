//printing two array string to single
#include<stdio.h>
int main(){
    char string[40],ch[40];
    int i=0,j=0;
    printf("Enter the string1 : ");
    gets(string);
    printf("Enter the string2 : ");
    gets(ch);

    while(string[i]!='\0'){
        i++;
    }
    while(ch[j]!='\0'){
        string[i]=ch[j];
        i++;
        j++;
    }
    printf("The string is %s",string);

    return 0;
}