#include<stdio.h>
void display_array(int arr[],int size)
{
	int i;
	printf("Array Elements are:");
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
}
void sort_array(int arr[],int size)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void merge_array(int arr1[],int arr2[],int arr3[],int size1,int size2)
{
	int i,j;
	for(i=0;i<size1;i++)
	{
		arr3[i]=arr1[i];
	}
	for(j=0;j<size2;j++)
	{
		arr3[i]=arr2[j];
		i++;
	}
}
int main()
{
	int arr1[20],arr2[20],arr3[40];
	int size1,size2,size3,i,j,n,temp;
	printf("Enter the array1 size lessthan20:");
	scanf("%d",&size1);
	if(size1<=20)
	{
		printf("enter the values to array1:");
		for(i=0;i<size1;i++)
		scanf("%d",&arr1[i]);
	}
	printf("Enter the array2 size lessthan20:");
	scanf("%d",&size2);
	if(size2<=20)
	{
		printf("enter the values to array2:");
		for(j=0;j<size2;j++)
		scanf("%d",&arr2[j]);
	}
	printf("\nsorted array1\n");
	sort_array(arr1,size1);
	display_array(arr1,size1);
	printf("\nsorted array2\n");
	sort_array(arr2,size2);
	display_array(arr2,size2);
	merge_array(arr1,arr2,arr3,size1,size2);
	sort_array(arr3,size1+size2);
	printf("\nmerged array\n");
	display_array(arr3,size1+size2);
	
return(0);
	
	
	
	
}
