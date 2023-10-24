//coping a string
#include<stdio.h>
int main(){
    char string[40],ch[40];
    int i=0,j=0;
    printf("Enter the string1 : ");
    gets(string);
    while(string[i]!='\0'){
        ch[i]=string[j];
        i++;
        j++;
    }
    ch[j]='\0';
    printf("The copied string is %s",ch);
    return 0;
}