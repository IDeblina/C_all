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

void search(struct node *head){
    struct node *temp = head;
    int item,flag;
    printf("enter the item you want to search: ");
    scanf("%d",&item);
    while(temp!=NULL){
        if(temp->data==item){
            printf("item found!!");
            flag=0;
            break;
        }
        else{
            flag=1;
        }
        temp = temp->next;
    }
    if(flag==1){
        printf("item not found :(");
    }
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
    search(head);

}