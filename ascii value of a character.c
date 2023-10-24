//ascii value of a character
#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    printf("Enter the character: ");
    ch = getch();
    printf("\nAscii value of character %c is %d",ch,ch);
    return 0;
}