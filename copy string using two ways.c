//copy string using two ways
#include<stdio.h>
#include<string.h>
int main(){
    char str1[20]="shreya";
    char str2[20];
    int i=0;
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    printf("The str is %s\n",str1);
    printf("The str2 is %s",str2);

    //// using library function
    char str3[20];
    char str4[20];
    gets(str3);
    strcpy(str4,str3);
    printf("The str4 is %s ",str4);
    return 0;
}