#include<stdio.h>
#define max_size 5
int s[max_size],top=-1;

void push (int item)
{
	if(top>=max_size)
	{
		printf("stack is full");
	}
	else
	{
		top=top+1;
		s[top]=item;
		printf("%d is pushed successfully",item);
	}
}
void pop()
{
	if(top<-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("the poped element is %d\n",s[top]);
		top=top-1;
	}
}
void display()
{ 
	int i;
	if(top==-1)
	{
		printf("stack is empty");
		return;
	}
	for(i=0;i<=top;i++)
	{
		printf("%d\n",s[i]);
	}
	printf("\n");
}
int main()
{
		int item,choice;
	do
	{
	
		printf("\n1.push\n2.pop\n3.display\n4.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter the element:");
					scanf("%d",&item);
					push(item);
					break;
			case 2:pop();
				    break;
			case 3:display();
				    break;
			case 4:printf("exiting");
					break;
			default:printf("enter the valid choice");
		}
	}while(choice!=4);
return(0);
}
