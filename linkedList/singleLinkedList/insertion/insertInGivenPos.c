#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* add_at_end(struct node *ptr, int data){

    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    ptr->next= temp;
    return temp;

}

void add_at_pos(struct node *head, int data, int pos){
    struct node *temp = head;
    struct node *temp2 = malloc(sizeof(struct node));
    temp2->data = data;
    temp2->next = NULL;

    pos--;
    while(pos!=1){
        temp= temp->next;
        pos--;
    }
    temp2->next = temp->next;
    temp->next= temp2;
}

int main(){

    struct node *head = malloc(sizeof(struct node));
    head->data = 40;
    head->next=NULL;

    struct node *ptr = head;

    ptr = add_at_end(ptr,50);
    ptr = add_at_end(ptr,60);
    ptr = add_at_end(ptr,70);

    int data =65,pos=4;
    add_at_pos(head,data,pos);
    ptr = head;
    while(ptr!=NULL){ 
        printf("%d \n",ptr->data);
        ptr = ptr->next;
    }

    return 0;
}