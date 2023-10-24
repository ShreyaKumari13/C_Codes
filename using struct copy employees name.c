////using struct copy employees name
#include<stdio.h>
#include<string.h>

struct emp{
    char name[20];
    int eno;
    float salary;
}e1,e2,e3;

int main(){
    //struct emp e1,e2,e3;

    strcpy(e1.name,"Shreya");
    e1.eno = 110;
    e1.salary = 789.32;

    strcpy(e2.name,"Megha");
    e2.eno = 210;
    e2.salary = 1789.32;

    e3=e2;

    
    printf("The name of the e1 is %s\n",e1.name);
    printf("The eno of the e1 is %d\n",e1.eno);
    printf("The salary of the e1 is %f\n",e1.salary);

    printf("The name of the e2 is %s\n",e2.name);
    printf("The eno of the e2 is %d\n",e2.eno);
    printf("The salary of the e2 is %f\n",e2.salary);

    printf("The name of the e3 is %s\n",e3.name);
    printf("The eno of the e3 is %d\n",e3.eno);
    printf("The salary of the e3 is %f\n",e3.salary);
    return 0;
}