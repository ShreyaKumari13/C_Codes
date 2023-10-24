//printing even number
#include<stdio.h>
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        a[i]=(i+1)+(i+1);
    }
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}