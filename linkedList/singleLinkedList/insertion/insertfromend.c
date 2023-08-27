#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
/*
TIME COMPLEXCITY = O(n)
void add_at_end(struct node *head, int data){
    struct node *temp, *ptr;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    while(ptr->next !=NULL){ //ptr->next is used bcoz after reaching null we will not change ptr to NULL , just change that NULL part to a new node address
        ptr = ptr->next;
    }
    ptr->next= temp;


}
*/

// TIME COMPLEXCITY = O(1)
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

    ptr = head;
    while(ptr!=NULL){ 
        printf("%d",ptr->data);
        ptr = ptr->next;
    }

    return 0;
}