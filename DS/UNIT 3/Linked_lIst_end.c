#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
// prototype declarations
void insertion_end();
void display_Linked_list();
void deletion_end();
struct node* head =NULL;
void insertion_end()  // insertion at the end of list
{
    int x;
    struct node* p;
    struct node* temp;
    printf("enter data to be Inserted at the end of list :");
    scanf("%d",&x);
    p = (struct node* ) malloc(sizeof(struct node));
    p->data = x;
    p->next=NULL;
    if (head==NULL)
        head =p;
    else
    {
       temp=head;
       while(temp->next != NULL)
       {
           temp = temp->next;
       }
    temp->next=p;
    }
}
void display_Linked_list()
{
    struct node* p;
    p=head;
        if(p==NULL)
        {
            printf("Linked list is Empty \n");
        }
        else{
            printf("Elements present in the LINKED List : ");
            while(p!=NULL)
            {
                printf("%d \t",p->data);
                p=p->next;
            }

        }
}
void deletion_end() // deletion at the end of the list
{
    struct node* temp;
    struct node* prev;
    temp=head;
    if(head==NULL)
    {
        printf("Linked List is empty \n");
    }
    else if(head->next == NULL){
        printf(" %d has been deleted from linked list\n ",head->data);
        head=NULL;
    }
    else{
        while(temp->next!=NULL)
        {
            prev = temp;
            temp=temp->next;
        }
        printf(" %d has been deleted from linked list\n ",temp->data);
        prev->next =NULL;
        free(temp);
`    }
}
int main()
{
    int option;
    do{
        printf(" \n Menu for Linked List operation \n");
        printf("Option -1 INSERTION \n");
        printf("Option -2 DELETION \n");
        printf("Option -3 DISPLAY \n");
        printf("Option -4 EXIT \n");
        printf("Enter Option : ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:insertion_end();
                   break;
            case 2:deletion_end();
                   display_Linked_list();
                   break;
            case 3:display_Linked_list();
                   break;
            case 4:exit(0);
        }
    }while(option !=4);

    return 0;
}


