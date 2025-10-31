#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *header=NULL;

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
	newnode->link=header;
	header=newnode;
	//struct *node newnode;
	//newnode=createNode(item);
	/*if(header==NULL)
	{
		header=newnode;
	}
	else
	{
		newnode->link=header;
		header=newnode;
	}*/

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
		return;
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
	while(ptr!=NULL && ptr->data!=key)
	{
		ptr1=ptr;
		ptr=ptr->link;
	}
		if(ptr==NULL)
		{
			printf("key not found,insertion not possible");
		}
		else
		{
			struct node *newnode;
			newnode=(struct node *)malloc(sizeof(struct node));
			newnode->data=item;
			newnode->link=ptr;
			ptr1->link=newnode;
		}
		
}
void deleteAtFirst()
{
	struct node *ptr;
	if(ptr==NULL)
	{
		printf("deletion is not possible");
	}
	else
	{

		ptr=header;
		header=header->link;
		free(ptr);
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
	insertAtAny(20,80);
	deleteAtFirst();
	traverselist();
	return(0);
}
