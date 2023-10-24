//using struct print student details
#include<stdio.h>
struct entry{
    char fname[50];
    char lname[50];
    char phone[50];
};

struct entry list[3];

int main(){
    for(int i=0;i<3;i++){
        printf("Enter the name of student %d:",i+1);
        scanf("%s",list[i].fname);
        printf("Enter the last name of student %d:",i+1);
        scanf("%s",list[i].lname);
        printf("Enter the phone number of student %d:",i+1);
        scanf("%s",list[i].phone);
    }

    for(int i=0;i<3;i++){
        printf("The name of the student %d is: %s\n",i+1,list[i].fname);
        printf("The last name of the student %d is: %s\n",i+1,list[i].lname);
        printf("The phone numer of the student %d is: %s\n",i+1,list[i].phone);
    }
    return 0;
}