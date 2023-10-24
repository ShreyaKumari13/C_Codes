//to print the largest using function
#include<stdio.h>
#include<math.h>

int large(int a,int b,int c){
    if((a>b) && (a>c)){
        return a;
    }
    else if((b>a) && (b>c)){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int x,y,z,lar;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of x:");
    scanf("%d",&y);
    printf("Enter the value of x:");
    scanf("%d",&z);
    lar = large(x,y,z);
    printf("The largest of 3 number is: %d",lar);
    return 0;
}

