//using struct print total number of subjects of a student
#include<stdio.h>
struct marks{
    char name[20];
    int subject[3];
    int total;
}student1;

int main(){
    int total=0;
    printf("Enter the name of the student1:");
    scanf("%s",student1.name);
    for(int i=0;i<3;i++){
        printf("Enter the marks of subject %d:",i+1);
        scanf("%d",&student1.subject[i]);
        total=total+student1.subject[i];
    }
    printf("The Name of the student is %s",student1.name);
    printf("\nThe total of the subject is %d",total);
    return 0;
}