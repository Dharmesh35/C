#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};

int main()
{
    struct node*head,*ptr,*temp;
    head=malloc(sizeof(struct node));
    ptr=head; 
    temp=malloc(sizeof(struct node));

    temp->data=8;
    temp->next=NULL;

    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;

    return 0;
}