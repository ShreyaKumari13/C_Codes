// the index of the word

#include<stdio.h>
#include <string.h>
int main(){
    char ch[20],string[40] = "shreya kumari";
    int i=0,j=0;
    printf("Enter the character:");
    scanf("%s",ch);
    while(string[i]!=ch[j]){
        i++;
    }
    printf("The element is at %d",i);

    return 0;
}