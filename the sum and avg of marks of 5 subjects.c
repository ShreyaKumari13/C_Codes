//the sum and avg of marks of 5 subjects
#include<stdio.h>
int main(){
    int sub[5],sum=0,avg;
    for(int i=1;i<=5;i++){
        printf("Enter the subject marks:");
        scanf("%d",&sub[i]);
        sum+=sub[i];
    }
    avg=sum/5;
    printf("The sum of the num is %d\n",sum);
    printf("The avg of the num is %d",avg);
    return 0;
}