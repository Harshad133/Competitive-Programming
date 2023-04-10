struct Stack
{
    int top;
    int capacity;
    char *arry;
};
struct Stack* createStack(int cap)
{
    struct Stack *p;
    p=(struct Stack*) malloc(sizeof(struct Stack));
    p->top=-1;
    p->capacity=cap;
    p->arry=(char *) malloc(sizeof(char)*p->capacity);
    return(p);
}
int isFull(struct Stack *stack)
{
    if(stack->top==stack->capacity-1)
        return(1);
    else
        return(0);
}
int isEmpty(struct Stack *stack)
{
    if(stack->top==-1)
        return(1);
    else
        return(0);
}
void push(struct Stack *stack,char v)
{
    if(isFull(stack))
        printf("\n Stack Overflow");
    else
    {
        stack->top++;
        stack->arry[stack->top]=v;
    }
}
char pop(struct Stack *stack)
{
    char v;
    if(isEmpty(stack))
        return(-1);
    v=stack->arry[stack->top];
    stack->top--;
    return(v);
}

bool isValid(char * s)
{
    struct Stack *stack;
    stack=createStack(strlen(s));
    int i;
    char v;

    for(i=0; s[i]; i++)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
            push(stack,s[i]);
        else
        {
            v=pop(stack);
            if(s[i]==')')
            {
                if(v!=s[i]-1)
                    return(0);
            }
            else
            {
                if(v!=s[i]-2)
                    return(0);
            }
        }
    }
    if(stack->top==-1)
      return(1);
    return (0);
}