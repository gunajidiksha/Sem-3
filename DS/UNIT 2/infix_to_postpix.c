#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

void infixtopostfix(char *e)
{
    char x;
    char *p;
    while(*e != '\0')
    {
        if(isalnum(*e))
         printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }

    while(top != -1)
    {
        x=pop();printf("%c ",x); p++;
    }

}
int main()
{
    char exp[100];
    char *e;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("Given Infix expression is -----> %s \n",exp);
    printf("\n");
    e = exp;
    infixtopostfix(e);
    return 0;
}
