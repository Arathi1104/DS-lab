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
void push(int item)
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
        printf("successfully deleted.\n");
    }
}
void display()
{
    struct stack *ptr;
    ptr = top;
    if(ptr==NULL)
    {
    	printf("stack is empty.\n");
    }
    printf("stack elements:\n");
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}
int main()
{
	do
	{
		int	item,choice;
		printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter	your	choice:	");
		scanf("%d",&choice);
		switch(choice)
		{
			case	1:printf("Enter	the	element:");
							scanf("%d",&item);
							push(item);
							break;
			case	2:pop();
							break;
			case	3:display();
							break;
			case	4:return(0);
			default:printf("Enter	the	correct	choice.");
							break;														
		}
	}while(1);
	
return(0);
}

