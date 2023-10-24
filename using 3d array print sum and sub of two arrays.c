//using 3d array print sum and sub of two arrays
#include<stdio.h>
int main(){
    int arr[3][3];
    int arr1[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the number at row and column %d %d : ",i,j);
            scanf("%d",&arr[i][j]);
        }   
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the number at row and column %d %d : ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n   arr    \tarr1\t   sum\t \tsub\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%3d",arr[i][j]);
        }
        printf("   ");
        
        for(int j=0;j<3;j++){
            printf("%3d",arr1[i][j]);
        }
        printf("   ");
        
        for(int j=0;j<3;j++){
            printf("%3d",arr[i][j]+arr1[i][j]);
        }
        printf("   ");
        for(int j=0;j<3;j++){
            printf("%3d",arr[i][j]-arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}