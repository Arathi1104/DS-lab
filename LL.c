#include <stdio.h>
#include <stdlib.h>

struct node {
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
    ptr = header;   // initialize before use
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
        // only one node in list
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
            // deleting first node
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
    insertAtFront(10);
    insertAtFront(20);
    insertAtFront(30);
    insertAtFront(40);
    insertAtEnd(50);
    insertAtEnd(60);
    insertAtAny(25, 30);   // insert 25 before 30 (your logic)
    insertAtAny(80, 10);   // key not found
    deleteAtFirst();
    deleteAtEnd();
    deleteAtAny(30);
    traverselist();

    return 0;
}
