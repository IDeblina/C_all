
#include<stdio.h>
#include<stdlib.h>
// Boolean data type
#include <stdbool.h>


void show(int stack[], int size, int top){
   for (int i = top; i >= 0; --i)
            printf("%d\n", stack[i]);
}

void push(int stack[], int size, int top){

    printf("Enter the item you want to push \n");
    int x;
    scanf("%d", &x);
    if(top==size){
        printf("stack overflow! \n");
        exit(0);
    }
    else{
        stack[top] = x;
    }
    show(stack,size,top);

}

int pop(){
    printf("pop operation running");
}


int main(){
    int top = -1;
    int size = 0;
    printf("Enter the size for the stack \n");
    scanf("%d", &size);

    int stack[size];

    bool breakpoint = true;
    
    while(breakpoint){
        printf("enter your choice :) \n1.Push\n2.pop\n3.Show\n0.exit\n");
        int value = 0;
        scanf("%d", &value);
        switch (value)
        {
        case 1:
            top+=1;
            push(stack, size, top);
           
            break;
        case 2:
            pop();
            break;
        case 3:
            show(stack, size,top); 
            break;
        case 0:
            breakpoint = false;
            printf("Thanks Bye!!");
            break;
        default:
            printf("Invalid choice!! please enter again");
            break;
        }
    }

}

/*
#include <stdio.h>

#include <stdlib.h>

#define SIZE 4

int top = -1, inp_array[SIZE];
void push();
void pop();
void show();

int main()
{
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

void push()
{
    int x;

    if (top == SIZE - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
        inp_array[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d", inp_array[top]);
        top = top - 1;
    }
}

void show()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", inp_array[i]);
    }
}
*/