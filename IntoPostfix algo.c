IntoPostfix algo
{
    while (Infix hasn't scanned over)
    {
        x=NextToken(Infix);
        if (x==operand) then print(x);
        else //x==operators
        {
            if (x==")")
            repeat
            {
                y=pop(s);
                if(y!="(") then print(y);
            }
            until (y==")")
        
            else if (x==other operators)//such as "(", *,/,*,>,<...
            {
                switch (compare operators priority, (x, s*Top));
                case">": //x > s*Top 
                        {
                            push(s,x); break;
                        }
                case"<=": //x <= s*Top
                        repeat
                        {
                            y=pop(s);
                            print(y);
                        }
                        until (x > s*Top)
                        push(s,x);
            }
        }
    }//end of first while
    
    while(Not IsEmpty(s)); //scan over check (s) status; pop out all item and print
    {
        y=pop(s);
        print(y);
    }
}
