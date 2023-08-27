#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* del_first(struct node *head){
    struct node *temp= head;
    head = head->next;
    free(temp);
    temp = NULL;
    return head;
}

struct node* add_at_end(struct node *ptr, int data){

    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    ptr->next= temp;
    return temp;

}

int main(){

    struct node *head = malloc(sizeof(struct node));
    head->data = 40;
    head->next=NULL;

    struct node *ptr = head;

    ptr = add_at_end(ptr,50);
    ptr = add_at_end(ptr,60);
    ptr = add_at_end(ptr,70);

    head = del_first(head);
    ptr = head;
    while(ptr!=NULL){ 
        printf("%d \n",ptr->data);
        ptr = ptr->next;
    }

    return 0;
}