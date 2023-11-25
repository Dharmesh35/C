#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node *head,*temp,*newnode;

void create()
{
    int z=1;
    while(z==1)
    {
    head=0;
    newnode=malloc(sizeof(struct node));
    printf("Enter data :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    printf("Do you want to add more element (press 1):");
    scanf("%d",&z);
    }
}

void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d", temp->data);
        temp=temp->next;
    } 
}

