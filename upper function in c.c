//upper function in c
#include<stdio.h>
#include<ctype.h>
int main(){
    char lower,upper;
    lower = getchar();
    upper = toupper(lower);
    putchar(upper);
    return 0;
}