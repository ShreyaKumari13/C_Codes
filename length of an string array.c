//length of an string array
#include<stdio.h>
int main(){
    char string[]="SHREYA";
    int i=0;
    while(string[i]!='\0'){
        // sum=sum+1;
        i++;
    }
    printf("The length of the string is %d",i);
    return 0;
}