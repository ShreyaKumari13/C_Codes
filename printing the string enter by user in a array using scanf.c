//printing the string enter by user in a array using scanf
#include<stdio.h>
int main(){
    char string[20];
    char string2[20];
    char string3[20];
    printf("Enter the string1 : ");
    scanf("%s",string);
    printf("Enter the string1 : ");
    scanf("%s",string2);
    printf("Enter the string1 : ");
    scanf("%s",string3);

    printf("The string is %s %s %s",string,string2,string3);
    return 0;
}