#include<stdio.h>

int main(){
    int s=1,i=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    printf("The answer:%d",s);
return 0;}
