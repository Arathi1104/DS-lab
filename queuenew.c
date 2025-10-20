#include <stdio.h>
#define MAX_SIZE 5

int queue_array[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int item) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue Overflow!\n");
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue_array[rear] = item;
        printf("%d enqueued to queue.\n", item);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow!\n");
    } else {
        printf("%d dequeued from queue.\n", queue_array[front]);
        front++;
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue_array[i]);
        }
        printf("\n");
    }
}

int	main()
{
	do
	{
		int	item,choice;
		printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
		printf("Enter	your	choice:	");
		scanf("%d",&choice);
		switch(choice)
		{
			case	1:printf("Enter	the	element:");
							scanf("%d",&item);
							enqueue(item);
							break;
			case	2:dequeue(item);
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
	
