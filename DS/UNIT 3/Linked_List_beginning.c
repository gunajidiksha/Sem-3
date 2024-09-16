#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
// prototype declarations
void insertion_begin();
void display_Linked_list();
void deletion_begin();
struct node* head =NULL;
void insertion_begin() // insertion at the beginning
{
    int x;
    struct node* p;
    printf("enter data to be Inserted at the beginning :");
    scanf("%d",&x);
    p = (struct node* ) malloc(sizeof(struct node));
    p->data = x;
    p->next = head;
    head=p;
}
void display_Linked_list()
{
    struct node* p;
    p=head;
        if(head==NULL)
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

void deletion_begin() // deletion at the beginning
{
    struct node* p;
    p=head;
    if(head==NULL)
    {
        printf("Linked List is empty \n");
    }
    else{
    head=head->next;
    printf(" %d from Linked List is deleted \n",p->data);
    free(p);
    }
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
            case 1:insertion_begin();
                   break;
            case 2:deletion_begin();
                    break;
            case 3:display_Linked_list();
                   break;
            case 4:exit(0);
        }
    }while(option !=4);

    return 0;
}

