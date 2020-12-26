//DELETION FROM BEGGINING OF ARRAY

#include<stdio.h>
#include<conio.h>

int main()
{
	int n,k,i;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the no of elements you want to store in array\n");
	printf("This no of elements must be <= %d\n",n);
	scanf("%d",&k);
	
	printf("Enter elements of array\n");
	
	for(i=0;i<k;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//DELETION FROM BEGGINING
	
	for(i=0;i<k;i++)
	{
		arr[i]=arr[i+1];
	}
	
	k=k-1;
	
	//PRINTING THE ARRAY AFTER DELETION
	
	printf("Array after deletion from beggining is\n");
	for(i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
	}
	
	getch();
	return 0;
}

 
