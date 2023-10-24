//Colllege grading
#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);    
    if(marks>=75){
        printf("Distinction\n");
    }
    else if(marks>=60){
        printf("First Class\n");
    }
    else if(marks>=50){
        printf("Second Class\n");
    }
    else if(marks>=40){
        printf("Third Class\n");
    }
    else{
        printf("Fail");
    }
    return 0;
}