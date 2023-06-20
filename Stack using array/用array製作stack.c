#include <stdio.h>
#include <stdlib.h>
#define MAXSTACK 10
int arr[MAXSTACK];
int top=-1;
int isEmpty();
void push(int);
int pop();

int main(int argc, char *argv[])
{
    int value; 
    int i;
    printf("enter the numbers sequentially: \n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &value);
        push(value);
    }
    printf("=================\n");
    
    while(!isEmpty())
    {
        printf("pop sequence is:%d\n", pop());
    }
    pop();

    return 0;
}


int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int item)
{
    if(top==MAXSTACK-1)
    {
        printf("stack overflow\n");
    }
    else
    {
        top++;
        arr[top]=item;
    }
}

int pop()
{
    int item;
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        item=arr[top];
        top--;
        return item;
    }
}













