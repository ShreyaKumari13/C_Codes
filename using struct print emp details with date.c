//using struct print emp details with date
#include<stdio.h>
#include<string.h>

struct date{
    int dd;
    int mm;
    int yy;
};

struct emp{
    int basic;
    int dearness_allowness;
    int house_allowance;
    struct date date_of_join;
} e1 ;

int main(){

    printf("Enter the basic, dearness_allowness, house_allowance ");
    scanf("\n%d %d %d",&e1.basic,&e1.dearness_allowness,&e1.house_allowance);
    printf("Enter the date,month,year");
    scanf("\n%d %d %d",&e1.date_of_join.dd,&e1.date_of_join.mm,&e1.date_of_join.yy);

    
    printf("The details of the employee is %d %d %d",e1.basic,e1.dearness_allowness,e1.house_allowance);
    printf("The date of joining is %d %d %d",e1.date_of_join.dd,e1.date_of_join.mm,e1.date_of_join.yy);

    return 0;
}