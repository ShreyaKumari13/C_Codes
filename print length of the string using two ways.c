//print length of the string using two ways
#include<stdio.h>
#include<string.h>
int main(){
    char str1[20]="shreya";
    int i=0;
    while(str1[i]!='\0'){
        i++;
    }
    printf("The len of the string %d\n",i);

    //////  using  library 

    int a = strlen(str1);
    printf("The length of the string is %d",a);
    return 0;
}