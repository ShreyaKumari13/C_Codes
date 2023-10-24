//given word is a palindrome
#include<stdio.h>
#include<string.h>
int main(){
    char word[25];
    int flag;
    printf("Enter the word: ");
    scanf("%s",word);
    int len = strlen(word);
    for(int i=0;i<len;i++){
        if(word[i]!=word[len-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag==1){
        printf("Not a palindrome");
    }
    else{
        printf("Yes a palindrome");
    }
    return 0;
}