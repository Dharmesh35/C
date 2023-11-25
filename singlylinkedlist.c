#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};


int length(struct node*head){
    struct node*temp=head;
    int count=1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}

void display(struct node* head)
{
    struct node*temp=head;
    while(temp->next!=NULL)
    {
        printf(" %d ",temp->data);
        temp=temp->next;
    }
    printf(" %d ",temp->data);
}



struct node* delete(struct node*head, int z){
    struct node* prev=head;
    struct node* current=prev->next;
    while(current->data!=z){
        prev=current;
        current=prev->next;
    }
    prev->next=current->next;
    current->next=NULL;
    free(current);
    return head;w
}

struct node*insert(struct node* head,int z,int number){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=z;
    struct node* current=head;
    while(current->data!=number){
        current=current->next;
    }
    temp->next=current->next;
    current->next=temp;
    return head;
}



int main(){

    int lengt,num;

    struct node*newnode=malloc(sizeof(struct node));
    struct node* head=newnode;
    struct node* tail=newnode;
    newnode->data=5;

    struct node*newnode2=malloc(sizeof(struct node));
    newnode2->data=3;
    newnode->next=newnode2;
    newnode2->next=NULL;

    struct node*newnode3=malloc(sizeof(struct node));
    newnode3->data=7;
    newnode2->next=newnode3;
    newnode3->next=NULL;

    display(head); 

    head=insert(head,8,3);

    display(head);
    lengt=length(head);
    printf("Length of the list is %d \n",lengt);
    printf("After deletion of node \n");
    delete(head,7);
    display(head);
    printf("Enter number to search :\n");
    scanf("%d",&num);
    struct node* temp1=head;
    while(temp1->next!=NULL){
        if(temp1->data==num){
            printf("Number found "); 
        }
        temp1=temp1->next;
    }
    if(temp1->data==num){
        printf(" found ");
    }
    else{
        printf(" error not found ");
    }
    return 0;
}
