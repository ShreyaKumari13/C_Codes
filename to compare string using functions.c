//to compare string using functions
#include<stdio.h>
#include <string.h>
int main(){
    char string[40]="shreya",ch[20]="shreya";
    int a = strcmp(string,ch);
    printf("Value is %d\n",a);

    char strin[40]="sh",cha[20]="shreya";
    int b = strcmp(strin,cha);
    printf("Value is %d\n",b);

    char stri[40]="shreya",chru[20]="sh";
    int c = strcmp(stri,chru);
    printf("Value is %d",c);



    return 0;
}

//// if string len is same a = 0 then it is equal
//// if a>0 str1 is greater than str2  a=1
//// if a<0 str1 is less than str2 a=-1