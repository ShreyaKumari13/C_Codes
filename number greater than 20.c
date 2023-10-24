//Number greater than 20
#include<stdio.h>
int main(){
    int num;
    printf("Enter the num:");
    scanf("%d",&num);
    while(num>20){
        printf("Number greater than 20");
        break;
    }
    return 0;
}