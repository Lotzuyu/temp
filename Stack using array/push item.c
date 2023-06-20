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
