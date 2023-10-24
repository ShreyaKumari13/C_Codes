//sum of odd and even number 
#include<stdio.h>
int sumodd(int a[],int n);
int sumeven(int a[],int n);

int main(){
    int a[20],n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sumodd(a,n);
    sumeven(a,n);
    return 0;
}

int sumodd(int a[],int n){
    int sum_odd=0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            sum_odd=sum_odd+a[i];
        }
    }
    printf("The sum of odd numbers is :%d\n",sum_odd);
}
int sumeven(int a[],int n){
    int sum_even=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            sum_even=sum_even+a[i];
        }
    }
    printf("The sum of even numbers is :%d\n",sum_even);
}

