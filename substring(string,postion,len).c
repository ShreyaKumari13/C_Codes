// substring(string,postion,len)

#include<stdio.h>
#include <string.h>
int main(){
    char string[40]="shreya kumari";
    char string2[40];
    int pos,length;
    printf("Enter the position:");
    scanf("%d",&pos);
    printf("Enter the length:");
    scanf("%d",&length);
    int i=0;
    while(pos<length){
        string2[i] = string[pos-1];
        i++;
        pos++;
    }
    string2[i]='\0';
    printf("The string is %s ",string2);
    return 0;
}