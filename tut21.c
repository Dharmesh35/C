#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head=NULL;
    head = malloc(sizeof(struct node));
    head -> data =6969 ;
    head -> link =head;

    printf("%d",head -> data);
    return 0;
}
