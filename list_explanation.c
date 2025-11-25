Skip to content
You said:
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
			case 6:printf("Enter the key to delete: ");
    				 scanf("%d", &key);
             deleteAtAny(key);
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

explain in simple way 
ChatGPT said:

Sure! Here is a very simple and easy-to-understand explanation of your program.
🔵 WHAT YOUR PROGRAM DOES

It creates a linked list and lets the user:

    Add elements at the front

    Add elements at the end

    Insert before a given value

    Delete first element

    Delete last element

    Delete any element

    Display the list

🔵 PROGRAM PARTS EXPLAINED SIMPLY
1. Node structure

struct node 
{
    int data;
    struct node *link;
};

This describes one box (node) in the linked list.

    data = the number stored in the node

    link = pointer to the next node

struct node *header = NULL;

    header points to the first node.

    NULL means the list is empty at the beginning.

2. Insert at Front

void insertAtFront(int item)

This adds a new element at the beginning.

Steps:

    Make a new node.

    Put data in it.

    Make it point to the current first node.

    Make header point to this new node.

3. Insert at End

void insertAtEnd(int item)

This adds an element at the end of the list.

Steps:

    Make a new node.

    If list is empty → new node becomes first node.

    Otherwise, go to the last node.

    Attach the new node there.

4. Insert Before a Given Key

void insertAtAny(int item, int key)

Insert item before the node whose data = key.

Steps:

    Search for the key.

    If key not found → print message.

    If found → create new node and link it before the key node.

5. Delete First Node

void deleteAtFirst()

Steps:

    If list is empty → print message.

    Otherwise → move header to next node.

    Free (delete) the old first node.

6. Delete Last Node

void deleteAtEnd()

Steps:

    If list is empty → print message.

    If only one node → make list empty.

    Otherwise → go to second-last node.

    Remove the last node.

7. Delete Any Node by Key

void deleteAtAny(int key)

Steps:

    Search for the node whose data = key.

    If not found → print message.

    If it's the first node → remove it.

    Otherwise → adjust linking and delete the node.

8. Display List

void traverselist()

Prints all the elements from first to last.
9. Main Program

Shows a menu repeatedly:

1.insertAtFront
2.insertAtEnd
3.insertAtAny
4.deleteAtFirst
5.deleteAtEnd
6.deleteAtAny
7.display
8.Exit

You pick a number → that operation happens.
This repeats forever until you choose 8 (Exit).
🎉That's the whole program—explained simply!

If you want, I can also:

✅ Draw diagrams to show how nodes connect
✅ Simplify the code
✅ Fix the small bug in insertAtAny
Just tell me!


ChatGPT can make mistakes. Check important info. See Cookie Preferences.
We use cookies

We use cookies to help this site function, understand service usage, and support marketing efforts. Visit Manage Cookies to change preferences anytime. View our Cookie Policy for more info.

