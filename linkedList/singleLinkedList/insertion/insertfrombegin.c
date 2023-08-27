#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void add_at_begin(struct node **head, int data){
    struct node *temp= malloc(sizeof(struct node));
    temp->data = data;
    temp ->link = NULL;

    temp->link = *head;
    *head = temp;
}


int main(){
    struct node *head= malloc(sizeof(struct node));
    head-> data = 20;
    head->link = NULL;

    struct node *ptr= malloc(sizeof(struct node));
    ptr->data = 30;
    ptr->link = NULL;
    head->link = ptr;

    int data=10;
    add_at_begin(&head,data);
    ptr = head;

    while(ptr!=NULL){
        printf("%d \n",ptr->data);
        ptr= ptr->link;
    }

    return 0;
}