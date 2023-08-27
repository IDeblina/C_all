#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node* add_at_end(struct node *ptr, int data){

    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link= temp;
    return temp;

}
struct node* del_sll(struct node *head){
    struct node *temp = head;
    while(temp!=NULL){
        temp = temp->link;
        free(head);
        head = temp;
    }
    return head;
}
int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 40;
    head->link=NULL;

    struct node *ptr = head;

    ptr = add_at_end(ptr,50);
    ptr = add_at_end(ptr,60);
    ptr = add_at_end(ptr,70);

    head = del_sll(head);
    if(head==NULL){
        printf("entire sll is deleted successfully");
    }
}