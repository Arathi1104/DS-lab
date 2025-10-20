#include<stdio.h>
#define max_size 5
int s[max_size],top=-1;

void	push(int	item)
{
	if(top>=max_size)
	{
		printf("Stack	is	full");
	}
	else
	{
		top=top+1;
		s[top]=item;
		printf("%d	is	pushed	successfully",item);
	}
}
void	pop()
{
	if(top<-1)
	{
		printf("Stack	is	empty");
	}
	else
	{
		printf("The poped	elemet	is	%d\n",s[top]);
		top=top-1;
	}
}	
void	display()
{
	if(top==-1)
	{
		printf("Stack	is	empty");
		return;
	}
	for(int	i=0;i<=top;i++)
	{
		printf("%d ",s[i]);

	}
	printf("\n");
}	
int	main()
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
		
				

 
 		
