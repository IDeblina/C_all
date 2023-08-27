#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

//counting the number of nodes (time complexcity : O(n))
void count_of_nodes(struct node *head){
    int count =0;
    if(head==NULL){
        printf("linked list is empty");
    }
    else{
        struct node *temp = NULL;
        temp = head;
        while(temp!=NULL){
            count++;
            temp= temp->link;  //this loop will run for n time for n nodes , O(n)
        }
        printf("%d",count);
    }

}

//printing the nodes data (time complexcity : O(n))
void print_nodes(struct node *head){
    if(head==NULL){
        printf("list is empty");
    }
    else{
        struct node *ptr=NULL;
        ptr = head;
        while(ptr!=NULL){
            printf("%d",ptr->data);
            ptr= ptr->link;  //this loop will run for n time for n nodes , O(n)
        }
        
    }

}


int main(){
    struct node *head = malloc(sizeof(struct node));
    head-> data = 50;
    head-> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current-> data = 60;
    current-> link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current-> data = 70;
    current-> link = NULL;
    head->link->link = current;

    count_of_nodes(head);
    print_nodes(head);


}