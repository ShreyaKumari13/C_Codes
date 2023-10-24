//character definition
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch); 
    if(ch>='0' && ch<='9'){
        printf("The character is numeric");
    }   
    else if(ch>='A' && ch<='Z'){
        printf("The character is uppercase");
    }   
    else if(ch>='a' && ch<='z'){
        printf("The character is lowercase");
    }   
    else{
        printf("The character is special");
    }
    return 0;
}