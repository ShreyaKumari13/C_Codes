#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char you,char comp){
    if (you==comp){
        return 0;
    }
    else if (you=='s'){
        if (comp=='w'){
            return 1;
        }
        else{
            return -1;
        }
    }
    else if (you=='w'){
        if (comp=='g'){
            return 1;
        }
        else{
            return -1;
        }
    }
    else if (you=='g'){
        if (comp=='s'){
            return 1;
        }
        else{
            return -1;
        }
    }

}
int main(){
    char you,comp;
    srand(time(0));
    int number = rand()%100+1;
    if(number<33){
        comp='s';
    }
    else if(number>33 && number<66){
        comp='w';
    }
    else{
        comp='g';
    }
    printf("\nEnter s-->snake , w-->water , g-->gun:");
    scanf("%c",&you);
    printf("\nYou chose %c and computer chose %c",you,comp); 
    int result = snakewatergun(you,comp);
    if (result==0){
        printf("\ndraw");
    }
    else if(result==1){
        printf("\nwon");
    }
    else{
        printf("\nlose");
    }
    return 0;
}