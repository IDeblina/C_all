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
struct node* getmiddle(struct node *head){
    struct node *fast= head;
    struct node *slow = head;
    while(fast!=NULL && fast->next!=NULL){
        slow= slow->next;
        fast = fast->next->next;
    }
    head = slow->data;
    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 40;
    head->next=NULL;

    struct node *ptr = head;

    ptr = add_at_end(ptr,50);
    ptr = add_at_end(ptr,60);
    ptr = add_at_end(ptr,70);

    int new_head = getmiddle(head);
    printf("%d",new_head);

}