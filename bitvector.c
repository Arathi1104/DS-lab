#include<stdio.h>
char univ_set[26]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
char set1[26],set2[26];
int bit_vect1[26],bit_vect2[26],result[26];
void initializeSet()
{
	for(int i=0;i<26;i++)
	{
		bit_vect1[i]=0;
		bit_vect2[i]=0;
		result[i=0];
	}
}
void bitVector(char ary)
{
	for()
}
int main()
{
	int num1,num2;
	printf("Enter the no. of elements in set1:");
	scanf("%d",&num1);
	printf("Enter the set1 elements:");
	for(int i=0;i<num1;i++)
	{
		scanf("%c",set1[i]);
	}
	printf("Enter the no. of elements in set2");
	scanf("%d",&num2);
	printf("Enter the set2 elements");
	for(int i=0;i<num2;i++)
	{
		scanf("%c",set2[i]);
	}
	
return(0);
}

