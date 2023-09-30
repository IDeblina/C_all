#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node* addatempty(struct node *head, int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->prev= NULL;
    temp->data= data;
    temp->next= NULL;
    head = temp;
    return head;

}

struct node* addatend(struct node *head, int data){
    struct node *temp = malloc(sizeof(struct node));
    struct node *ptr= head;
    temp->prev= NULL;
    temp->data= data;
    temp->next= NULL;
    while(ptr->next!=NULL){
        ptr= ptr->next;
    }
    ptr->next= temp;
    temp->prev= ptr;
    return head;

}

int main()
{
    struct node *head = malloc(sizeof(struct node)) ;
    int data = 40;
    head = addatempty(head, data);
    head= addatend(head,45);
    head= addatend(head,50);
    head= addatend(head,60);

    struct node *ptr= head;
    while(ptr!= NULL){
        printf("%d ",ptr->data);
        ptr= ptr->next;
    }

}