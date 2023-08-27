#include<stdio.h>
#include<stdlib.h>

// We use the typedef keyword to create an alias name for data types. It is commonly used with structures to simplify the syntax of declaring variables.

// For example, let us look at the following code:

//https://www.programiz.com/c-programming/c-structures#google_vignette

typedef struct node{
    int data;
    struct node *next;
} sll;

struct node* add_at_end(struct node *ptr, int data){

    sll *temp = (struct node*)malloc(sizeof(sll));
    temp->data = data;
    temp->next = NULL;

    ptr->next= temp;
    return temp;

}
struct node* getmiddle(struct node *head){
    sll *fast= head;
    sll *slow = head;
    while(fast!=NULL && fast->next!=NULL){
        slow= slow->next;
        fast = fast->next->next;
    }
    head = slow->data;
    return head;
}

int main()
{
    sll *head = malloc(sizeof(sll));
    head->data = 40;
    head->next=NULL;

    sll *ptr = head;

    ptr = add_at_end(ptr,50);
    ptr = add_at_end(ptr,60);
    ptr = add_at_end(ptr,70);

    int new_head = getmiddle(head);
    printf("%d",new_head);

}