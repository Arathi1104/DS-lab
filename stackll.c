#include <stdio.h>
#include <stdlib.h>
#define max_size 5

int counter=0;
struct stack 
{
    int data;
    struct stack *link;
};

struct stack *top = NULL;
{
    struct stack *newnode;
    newnode = (struct stack *)malloc(sizeof(struct stack));
    newnode->data = item;
    newnode->link = NULL;
    if(top==NULL)
    {
    	top=newnode;
    }
    else
    {
    	if(counter<max_size)
    	{
    		newnode->link=top;
    		top=newnode;
    		counter=counter+1;
    	}
    	else
    	{
    		printf("stack is full");
    	}
    }
    
}
void pop()
{
    struct stack *ptr;

    if (top == NULL)
    {
        printf("deletion is not possible,stack is empty\n");
    }
    else
    {
        ptr = top;
        top= top->link;
        free(ptr);
    }
}
void display()
{
    struct stack *ptr;
    ptr = top;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}
int main()
{
	push(43);
	push(32);
	display();
	
return(0);
}

