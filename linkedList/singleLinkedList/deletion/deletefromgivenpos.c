#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void del_at_pos(struct node **head, int pos){
    struct node *current = *head;
    struct node *prev = *head;
    if(*head== NULL){
        printf("linked list is empty");
    }

    else if (pos==1)
    {
        *head= current->link;
        free(current);
        current = NULL;
    }
    else
    {
        while(pos!=1){
            prev = current;
            current= current->link;
            pos--;
        }
        prev->link = current->link;
        free(current);
        current= NULL;
    }
   
}

struct node* add_at_end(struct node *ptr, int data){

    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link= temp;
    return temp;

}

int main(){

    struct node *head = malloc(sizeof(struct node));
    head->data = 40;
    head->link=NULL;

    struct node *ptr = head;

    ptr = add_at_end(ptr,50);
    ptr = add_at_end(ptr,60);
    ptr = add_at_end(ptr,70);

    int pos = 3;
    del_at_pos(&head,pos);

    ptr = head;
    while(ptr!=NULL){ 
        printf("%d",ptr->data);
        ptr = ptr->link;
    }

    return 0;
}