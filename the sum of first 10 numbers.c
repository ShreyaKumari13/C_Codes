//the sum of first 10 numbers
#include<stdio.h>
int main(){
    int i=1;
    int sum=0;
    while(i<11){
        sum+=i;
        i++;
    }
    printf("The sum of the numbers is %d",sum);
    return 0;
}