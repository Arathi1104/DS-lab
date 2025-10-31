#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *header = NULL;

void insertAtFront(int item)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = header;
    header = newnode;
}

void insertAtEnd(int item)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = NULL;

    if (header == NULL)
    {
        header = newnode;
    }
    else
    {
        struct node *ptr = header;
        while (ptr->link != NULL)
            ptr = ptr->link;

        ptr->link = newnode;
    }
}

void insertAtAny(int item, int key)
{
    struct node *ptr = header;
    while (ptr != NULL && ptr->data != key)
    {
        ptr = ptr->link;
    }

    if (ptr == NULL)
    {
        printf("Key %d not found, insertion not possible\n", key);
    }
    else
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = item;
        newnode->link = ptr->link;
        ptr->link = newnode;
    }
}

void deleteAtFirst()
{
    if (header == NULL)
    {
        printf("Deletion not possible, list is empty\n");
    }
    else
    {
        struct node *ptr = header;
        header = header->link;
        free(ptr);
    }
}
void deleteAtEnd()
{

}

void traverselist()
{
    struct node *ptr = header;
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
    insertAtAny(25, 20); // Insert 25 after 20
    deleteAtFirst();
    traverselist();
    return 0;
}

