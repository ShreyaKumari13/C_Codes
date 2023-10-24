//to know that a character is a vowel
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the charater:");
    scanf("%c",&ch); 
    switch(ch){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("The character is a vowel");
            break;
        default:
            printf("Invalid");
            break;
    }
    return 0;
}