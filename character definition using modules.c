//character definition using modules
#include<stdio.h>
#include<ctype.h>
#include<conio.h>

int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch); 
    if(isdigit(ch)){
        printf("The character is numeric");
    }   
    else if(isupper(ch)){
        printf("The character is uppercase");
    }   
    else if(islower(ch)){
        printf("The character is lowercase");
    }   
    else{
        printf("The character is special");
    }
    return 0;
}