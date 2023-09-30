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
struct node* addatfirst(struct node *head){
     struct node *temp = malloc(sizeof(struct node));
    temp->prev= NULL;
    temp->data= 30;
    temp->next= NULL;
    temp->next = head;
    head->prev= temp;
    head = temp;
    return head;
}
int main()
{
    struct node *head = malloc(sizeof(struct node)) ;
    int data = 40;
    head = addatempty(head, data);
    head= addatfirst(head);


    struct node *ptr= head;
    while(ptr!= NULL){
        printf("%d ",ptr->data);
        ptr= ptr->next;
    }

}