//PRINTING ARRAY CONTENT AFTER b ROTATIONS TOWARDS LEFT

#include<stdio.h>
#include<conio.h>

int main()
{
	int n,k,i,b,j;
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
	
	printf("Enter value of b i.e how many rotations you want towards left\n");
    scanf("%d",&b);	
    
    for(i=0;i<b;i++)
    {
    	
    	arr[k]=arr[0];
    	k=k+1;
    	
    	for(j=0;j<k;j++)
    	{
    		arr[j]=arr[j+1];
		}
		k=k-1;	
    	
	}
	printf("Array content after %d rotations toward left is\n",b);
	
	for(i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
	}
	
	getch();
	return 0;
}

 
