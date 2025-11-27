#include<stdio.h>
int main()
{
  int i,j,n,sum;
  int arr[50];
  printf("Enter the no of elements to add:");
  scanf("%d",&n);
  if(n>50)
  {
  	printf("Enter a number lessthan 50\n");
  }
  else
  {
  	printf("Enter the %d elements:",n);
  	for(i=0;i<n;i++)
  	{	
     	scanf("%d",&arr[i]);
  	}
  	for(j=0;j<n;j++)
  	{
     	sum=sum+arr[j];
  	}
 		 printf("Sum of %d elements is:%d",n,sum);
  }
return(0);
}
