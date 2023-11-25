#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

int main()
{
    struct node *head,*ptr;
    head=malloc(sizeof(struct node));
    head->data=68;
    head->next=NULL;

    ptr=malloc(sizeof(struct node));
    ptr->data=10;
    ptr->next=NULL;
    
    
    
    
}