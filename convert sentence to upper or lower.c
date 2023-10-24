//convert sentence to upper or lower
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[30];
    printf("Enter the sentence: ");
    gets(a);
    printf("The given string is: %s",a);
    for(int i=0;a[i]!=0;i++){
        if(islower(a[i])){
            a[i]=toupper(a[i]);
        }
        else{
            a[i]=tolower(a[i]);
        }
    }
    printf("\nThe string is %s",a);
    return 0;
}