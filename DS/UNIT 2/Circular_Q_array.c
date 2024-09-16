
/* Implementation of circular queue using array in C */

#include<stdio.h>
#include<stdlib.h>
# define N 5  //N = Maximum Size of the Q
int front=-1;
int rear=-1;

void enqueue(int cq[],int item);
int dequeue(int cq[]);
int isEmpty();
int isFull();
void display(int cq[]);

void enqueue(int cq[],int item)
{
    if(isFull())
    {
        printf("Queue Overflow\n");
        return;
    }
    if(front == -1){   // Insertion of FIRST element
        front=0;
    }
    rear=(rear+1)%N;       // rear is incremented
    cq[rear]=item;     // assigning a value to the queue at the rear position.
}

int dequeue(int cq[])
{
    int deleted_item;
    if(isEmpty())
    {
        printf("Queue Underflow\n");
	    return 0;		 // To show Failure Exit.
    }
    deleted_item = cq[front];
    if(front==rear)  // Queue has left out only with 1 element
    {
       front=-1;
       rear=-1;
    }
    else
    {
       front = (front + 1)%N;
    }

    return deleted_item;
}

int isEmpty(){
    return ( (front == -1) ? 1 : 0);
}

int isFull(){
    return ( ( (rear + 1)%N == front) ? 1 : 0);
}

void display(int cq[])
{
    int i;
    if(isEmpty())
    {
        printf("Queue Underflow\n.");
	return;
    }
   i = front;
        if(front < rear){
            while(i<=rear)
            {
                printf("%d, ", cq[i]);
                i=i+1;
            }
        }
        else{
            while(i != rear)
            {
                printf("%d,", cq[i]);
                i=(i+1)%N;
            }
            printf("%d,", cq[i]);
        }

}

int main()
{
 int cq[N],choice,item,x;
    do{
        printf(" \n Menu for QUEUE operation \n");
        printf("Option -1 Enter queue \t");
        printf("Option -2 Delete queue \t");
        printf("Option -3 DISPLAY queue\t");
        printf("Option -4 EXIT queue\n");
        printf("Enter Option : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter element into queue :");
                    scanf("%d",&item);
                    enqueue(cq,item);
                    display(cq);
                    break;
            case 2: x=dequeue(cq);
                    printf("Deleted element from queue %d \n:",x);
                    display(cq);
                    break;
            case 3: display(cq);
                   break;
            case 4:exit(0);
        }
    }while(choice!=4);

    return 0;
}
