#include<stdio.h>

struct node{
    int data;
    struct node *next;
};

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
    return 0;
}