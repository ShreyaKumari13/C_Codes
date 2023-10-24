//bubble sort using function
#include<stdio.h>

void bubblesort(int arr[],int n);

int main(){
    int arr[20], n;
    printf("Enter the frequency of number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the marks of student %d:",i+1);
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        printf("The sorted elements are :%d\n",arr[i]);
    }

    return 0;
}

void bubblesort(int arr[],int n){
    int pass,i,temp;
    for(pass=1;pass<n;pass++){
        for(i=0;i<=n-pass-1;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
