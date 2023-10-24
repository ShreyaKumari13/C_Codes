//printing 3-d array
#include<stdio.h>
int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d    ",*(*(a+i)+j));
        }
    }
    return 0;
}