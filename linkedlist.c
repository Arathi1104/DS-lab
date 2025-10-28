#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *header;

/*void createnode(int item)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	header=newnode;
}*/
void insertAtFront(int item)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	//struct *node newnode;
	//newnode=createNode(item);
	if(header==NULL)
	{
		header=newnode;
	}
	else
	{
		newnode->link=header;
		header=newnode;
	}

}
void insertAtEnd(int item)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	if(header==NULL)
	{
		header=newnode;
	}
	else
	{
		struct node *ptr;
		ptr=header;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=newnode;
		newnode->link=NULL;
		newnode->data=item;
	}
}
void insertAtAny(int item,int key)
{
	struct node *ptr,*ptr1;
	while(ptr!=NULL)
	{
		if(ptr->data==key)
		{
			newnode->data=item;
			newnode->link=ptr->link;
			ptr->link=newnode;
			
		}
		else
		{
			printf("key not found,insertion is not possible");
		}
	
	}
}

void traverselist()
{
	struct node *ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->link;
	}
}
int main()
{
	//header=NULL;
	//createnode();
	//printf("Data:%d\n",*header);
	insertAtFront(10);
	insertAtFront(20);
	insertAtFront(30);
	insertAtFront(40);
	insertAtEnd(50);
	insertAtEnd(60);
	traverselist();
	
	
	return(0);
}
