//compare string using two ways
#include<stdio.h>
#include<string.h>
int main(){
    int i=0,j=0;
    char string1[20];
    char string2[20];
    gets(string1);
    gets(string2);
    while(string1[i]==string2[j] && string1[i]!='\0'){
        i++;
        j++;
    }
    if (string1[i]==string2[j]){
        printf("string is equal");
    }
    else{
        printf("string not equal");
    }
    char str1[]="shreya";
    char str2[]="shreya";
    int value = strcmp(str1,str2);
    printf("Value is %d",value);
    char str1[]="shreya";
    char str2[]="shre";
    int value = strcmp(str1,str2);
    printf("Value is %d",value);
    char str1[]="shre";
    char str2[]="shreya";
    int value = strcmp(str1,str2);
    printf("Value is %d",value);
    return 0;
}