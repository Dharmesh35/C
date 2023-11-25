#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node *head,*temp,*newnode;

void create()
{
    int z=1;
    while(z==1)
    {
    head=NULL;
    newnode=malloc(sizeof(struct node));
    printf("Enter data :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if (head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    printf("Do you want to add more element (press 1):");
    scanf("%d",&z);
    }
}

void display(struct node*head)
{
    temp=head;
    while(temp->next!=NULL)
    {
        printf("%d", temp->data);
        temp=temp->next;
    } 
}

int length()
{
    int count;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    } 
    return count;
}

int insertatbeg()
{
    newnode=malloc(sizeof(struct node));
    printf("Enter the data you want to insert:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->next=head;
    head=newnode;
}

int insertatend()
{
    newnode=malloc(sizeof(struct node));
    printf("Enter the data you want to insert:");
    scanf("%d",&newnode->data);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

int insertatpos()
{
    int pos,i;
    newnode=malloc(sizeof(struct node));
    printf("Enter the data you want to insert:");
    scanf("%d",&newnode->data);
    printf("Enter the position on which you want to insert:");
    scanf("%d",&pos);
    if(pos>length())
    {
        printf("Invalid Value!!");
    }    
    else
    {
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        temp->next=newnode->next;
        temp->next=newnode;
    }

}

int deleteatbeg()
{
    temp=head;
    head=head->next;
    free(temp);
}

int deleteatend()
{   
    struct node*prevnode;
    temp=head;
    while(temp->next!=0)
    {
        prevnode=temp;
        temp=temp->next;
    }
    if(temp==head)
    {
        head=0;
    }
    else
    {
        prevnode->next=NULL;
    }
    free(temp);
}

int deleteatpos()
{
    struct node*nextnode;
    int pos,i;
    printf("Enter the position on which you want to insert:");
    scanf("%d",&pos);
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}

void reverse()
{
   struct node*prev,*curr,*nextnode;
   prev=NULL;
   curr=nextnode=head;  
   while(nextnode!=NULL)
   {
    nextnode=nextnode->next;
    curr->next=prev;
    prev=curr;
    curr=nextnode;
   }
   head=prev;
}

int main()
{
    create();
    display(head);
    return 0;
}

