#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

//reversely print SLL using recursion
void reverse_print(struct node *temp){
    if(temp==NULL)
    return;
    reverse_print(temp->next);
    printf("%d \n",temp->data);
}


int main(){

    //single linked list creation
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->next=NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data=50;
    current->next=NULL;
    head->next=current;

    current = malloc(sizeof(struct node));
    current->data=60;
    current->next=NULL;
    head->next->next=current;

    struct node *temp = head;
    reverse_print(head);
    return 0;
}