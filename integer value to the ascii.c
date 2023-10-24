//integer value to the ascii
#include<stdio.h>
#include<stdlib.h>
int main(){
    char string[]="12345";
    int num;
    num = atoi(string);
    printf("%d",num+num);
    return 0;
}