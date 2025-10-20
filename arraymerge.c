	#include<stdio.h>
	void display_array(int arr[],int sze)
	{
	  printf("Array Elements are:");
	  for(int i=0;i<sze;i++)
	  {
	    printf("%d  ",arr[i]);
	  }
	} 

	int sortary(int arr[],int sze)
	{
		int i,j,temp;
		for(int i=0;i<sze;i++)
	   {
	     for(int j=i+1;j<sze;j++)
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
	 	int arr1[20],arr2[20],arr3[20];
	 	int size1,size2,size3,i,j,n,temp;
	 	printf("Enter the array1 size lessthan20:");
	 	scanf("%d",&size1);
	 	if(size1<=50)
	 	{
	     printf("Enter the values to array1:");
	     for(i=0;i<size1;i++)	
	     scanf("%d",&arr1[i]);
	 	}
	  printf("Enter the array2 size lessthan20:");
	  scanf("%d",&size2);
	  if(size2<=50)
	   {
	   
	     printf("\nEnter the values to array2:");
	     for(j=0;j<size2;j++)	
	     scanf("%d",&arr2[j]);
	   }
	   
	   
	  printf("\nsorted array 1\n");
	  sortary(arr1,size1);
	  display_array(arr1,size1);
	  printf("\nsorted array 2\n");
	  sortary(arr2,size2);
	  display_array(arr2,size2);
	  merge_array(arr1,arr2,arr3,size1,size2);
	  sortary(arr3,size1+size2);
	  printf("\nmerged array\n");
	  display_array(arr3,size1+size2);
	     
	return(0);
	}



