#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node* reverse(struct node *head){
    struct node *prev= NULL;
    struct node *next= NULL;
    while(head != NULL){
        next = head->link;
        head->link = prev;
        prev= head;
        head= next;
    }
    head = prev;
    return head ;

}

void display(struct node *head){

        struct node *ptr=NULL;
        ptr = head;
        while(ptr!=NULL){
            printf("%d \n",ptr->data);
            ptr= ptr->link;
        }

}

int main(){

    //single linked list creation
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link=NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data=50;
    current->link=NULL;
    head->link=current;

    current = malloc(sizeof(struct node));
    current->data=60;
    current->link=NULL;
    head->link->link=current;

    head = reverse(head);
    display(head);
    return 0;
}