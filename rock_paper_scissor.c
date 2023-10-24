#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char you,char comp){
    if (you==comp){
        return 0;
    }
    else if(you=='r'){
        if(comp=='p'){
            return -1;
        }
        else{
            return 1;
        }
    }
    else if(you=='p'){
        if(comp=='r'){
            return -1;
        }
        else {
            return 1;
        }
    }
    else if(you=='s'){
        if(comp=='r'){
            return -1;
        }
        else{
            return 1;
        }
    }
}
int main(){
    char you,comp;
    int j = 0,k = 0;
    for(int i=0;i<5;i++){
        srand(time(0));
        int number = rand()%100+1;
        if(number<33){
            comp = 'r';
        }
        else if (number>33 && number<66){
            comp = 'p';
        }
        else{
            comp = 's';
        }
        printf("\nEnter r-->rock s-->scissors p-->paper :");
        scanf("\n%c",&you);
        printf("\nYou choose %c and computer choose %c",you,comp);
        int result = snakewatergun(you,comp);
        if (result==0){
            printf("\ndraw");
        }
        else if(result==1){
            printf("\nwon");
            j+=1;
            printf("\nYour score is %d",j);
        }
        else{
            printf("\nlose");
            k+=1;
            printf("\nComputer score is %d",k);
        }
    }
    return 0;
}