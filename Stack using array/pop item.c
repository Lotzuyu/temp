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
