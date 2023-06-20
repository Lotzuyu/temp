#include<stdio.h>

int main(){
    int fac;
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num=1){
        return 1;
    }
    else{
        fac=num*fac(num-1)
        return fac
    }
    printf("The answer:%d",num);
return 0;}
