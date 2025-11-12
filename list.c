#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

struct node *header = NULL;

void insertAtFront(int item)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = header;
    header = newnode;
}

void insertAtEnd(int item)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = NULL;

    if (header == NULL)
    {
        header = newnode;
        return;
    }
    else
    {
        struct node *ptr;
        ptr = header;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = newnode;
    }
}

void insertAtAny(int item, int key)
{
    struct node *ptr, *ptr1;
    ptr = header;   
    ptr1 = NULL;

    while (ptr != NULL && ptr->data != key)
    {
        ptr1 = ptr;
        ptr = ptr->link;
    }

    if (ptr == NULL)
    {
        printf("key not found, insertion not possible\n");
    }
    else
    {
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = item;
        newnode->link = ptr;
        ptr1->link = newnode;
    }
}

void deleteAtFirst()
{
    struct node *ptr;

    if (header == NULL)
    {
        printf("deletion is not possible\n");
    }
    else
    {
        ptr = header;
        header = header->link;
        free(ptr);
    }
}

void deleteAtEnd()
{
    struct node *ptr, *ptr1;

    if (header == NULL)
    {
        printf("deletion not possible, list is empty\n");
        return;
    }

    ptr = header;
    ptr1 = NULL;

    while (ptr->link != NULL)
    {
        ptr1 = ptr;
        ptr = ptr->link;
    }

    if (ptr1 == NULL)
    {
        header = NULL;
    }
    else
    {
        ptr1->link = NULL;
    }

    free(ptr);
}

void deleteAtAny(int key)
{
    struct node *ptr, *ptr1;

    if (header == NULL)
    {
        printf("deletion not possible, list is empty\n");
        return;
    }

    ptr = header;
    ptr1 = NULL;

    while (ptr != NULL && ptr->data != key)
    {
        ptr1 = ptr;
        ptr = ptr->link;
    }

    if (ptr == NULL)
    {
        printf("key not found, deletion not possible\n");
    }
    else
    {
        if (ptr1 == NULL)
        {
            header = ptr->link;
        }
        else
        {
            ptr1->link = ptr->link;
        }
        free(ptr);
    }
}

void traverselist()
{
    struct node *ptr;
    ptr = header;
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
		int	item,choice,key;
		printf("\n1.insertAtFront\n2.insertAtEnd\n3.insertAtAny\n4.deleteAtFirst\n5.deleteAtEnd\n6.deleteAtAny\n7.display\n8.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter the element:");
				   scanf("%d",&item);
				   insertAtFront(item);
				   break;
			case 2:printf("Enter the element:");
				   scanf("%d",&item);
				   insertAtEnd(item);
				   break;
			case 3:printf("Enter the element:");
				   scanf("%d",&item);
				   printf("Enter the key before which to insert: ");
           scanf("%d", &key);
				   insertAtAny(item,key);
				   break;
			case 4:deleteAtFirst();
				   break;
			case 5:deleteAtEnd();
				   break;
			case 6:deleteAtAny(key);
				   break;
			case 7:traverselist();
				   break;
			case 8:return(0);
			default:printf("Enter	the	correct	choice.");
							break;														
		}
	}while(1);
return(0);
}
