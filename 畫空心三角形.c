#include <stdio.h>

int main()
{
    int j;
    int i;
    int N;
    printf("please enter N= ");
    scanf("%d", &N);
    
    printf("*\n");
    for(i=0;i<=N-3;i++)
    {
        printf("*");
        for(j=1;j<=i;j++)
        {
            printf("@");
        }
    printf("*\n");
    }
    
    for(j=1;j<=N;j++)
    {
        printf("*");
    }
    return 0;
}
