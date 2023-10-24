//printing an array given by user
#include<stdio.h>
#define SIZE 20
int main(){
    int a[SIZE],n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}