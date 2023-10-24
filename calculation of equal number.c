//calculation of equal number
#include<stdio.h>
int main(){
    int b,a;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the number: ");
    scanf("%d",&b);
    if (a==b){
        printf("The sum of number is %d\n",a+b);
        printf("The sub of number is %d\n",a-b);
        printf("The mul of number is %d\n",a*b);
        printf("The div of number is %d\n",a/b);
    }
    else{
        printf("The numbers are not equal");
    }
    return 0;
}