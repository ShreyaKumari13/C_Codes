//printing two string using while loop
#include<stdio.h>
#include<string.h>
int main(){
    char string[20]="12345";
    char string2[20]="12345";
    int i=0,j=0;
    while(string[i]!='\0'){
        i++;
    }
    while(string2[j]!='\0'){
        string[i]=string2[j];
        i++;
        j++;
    }
    string[i] = '\0';
    printf("%s\n",string);

    char string3[20]="12345";
    char string4[20]="12345";
    strcat(string3,string4);
    printf("%s",string3);
    return 0;
}