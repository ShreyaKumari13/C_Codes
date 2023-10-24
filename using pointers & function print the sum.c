//using pointers & function print the sum
#include<stdio.h>
int addNumbers(int *fiveNumbers);

int main(){
    int array[5];
    int i,result = 0;
    printf("Enter the five numbers:");
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    result = addNumbers(array);
    printf("The sum of the numbers of array is %d ",result);
    return 0;
}

int addNumbers(int *fiveNumbers){
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=*fiveNumbers;
        fiveNumbers++;
    }
    return sum;
}