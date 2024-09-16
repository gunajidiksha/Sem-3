#include <stdio.h>
#include <stdlib.h>
#define max 5

// prototype declarations
int display_stack(int a[], int top);
void push_stack(int a[], int *top);
void pop_stack(int a[], int *top);

int display_stack(int a[], int top)
{
    if(top<0)
        {
            printf("Stack is Empty \n");
        }
        else
        {
            printf("elements present in the stack : ");
            while(top>=0)
            {
               printf("%d \t",a[top]);
               top--;
            }

        }
}
void push_stack(int a[], int *top)
{
    int item;
    if (*top >= (max-1))
        printf("Stack full \n");
    else
    {
       printf("Enter item to be pushed (Max=5): ");
       scanf("%d",&item);
       (*top)++;
       a[*top] = item;

    }

}
void pop_stack(int a[], int *top)
{
  int x;
    if(*top<0)
    {
      printf("Stack is Empty \n");
    }
    else
    {
        x=a[*top];
       (*top)--;
       printf("Popped element is %d\n",x);
    }
}
int main()
{
 int a[5],choice,top=-1;
    do{
        printf(" \n Menu for stack operation \n");
        printf("Option -1 PUSH \t");
        printf("Option -2 POP \t");
        printf("Option -3 DISPLAY \t");
        printf("Option -4 EXIT \n");
        printf("Enter Option : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push_stack(a,&top);
                    display_stack(a,top);
                    break;
            case 2: pop_stack(a,&top);
                    display_stack(a,top);
                    break;
            case 3: display_stack(a,top);
                   break;
            case 4:exit(0);
        }
    }while(choice!=4);

    return 0;
}
