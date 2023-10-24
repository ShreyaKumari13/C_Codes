//printing a array string using while and for loop
#include<stdio.h>
int main(){
    char string[] = "shreya";
    int i=0;
    while(string[i]!='\0'){
        printf("%c",string[i]);
        i++;
    }
    printf("\n");

    for(int i=0;string[i]!='\0';i++){
        printf("%c",string[i]);
    }


    return 0;
}

