//greater number among 5 given numbers
#include<stdio.h>
int main(){
    int marks,marks2,marks3,marks4,marks5;
    printf("Enter the marks:");
    scanf("%d",&marks);  
    printf("Enter the marks2:");
    scanf("%d",&marks2); 
    printf("Enter the marks3:");
    scanf("%d",&marks3); 
    printf("Enter the marks4:");
    scanf("%d",&marks4); 
    printf("Enter the marks5:");
    scanf("%d",&marks5);   
    if((marks>marks2) && (marks>marks3) && (marks>marks4) && (marks>marks5)){
        printf("%d is greater\n",marks);
    }
    else if((marks2>marks) && (marks2>marks3) && (marks2>marks4) && (marks2>marks5)){
        printf("%d is greater\n",marks2);
    }
    else if((marks3>marks) && (marks3>marks2) && (marks3>marks4) && (marks3>marks5)){
        printf("%d is greater\n",marks3);
    }
    else if((marks4>marks) && (marks4>marks3) && (marks4>marks2) && (marks4>marks5)){
        printf("%d is greater\n",marks4);
    }
    if((marks5>marks) && (marks5>marks3) && (marks5>marks4) && (marks5>marks2)){
        printf("%d is greater\n",marks5);
    }
    return 0;
}