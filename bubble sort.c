//bubble sort
#include<stdio.h>
int bubble_sort(int a[],int n){
    int temp;
    for(int i=1;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    } 
}
int main(){
    int a[20],n;
    printf("Enter the no.of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        // printf("Enter the element at %d:",i+1);
        scanf("%d\n",&a[i]);
    }
    bubble_sort(a,n);
    printf("The sorted elements are:");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}