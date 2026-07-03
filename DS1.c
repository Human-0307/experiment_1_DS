#include<stdio.h>
int main()
{
	int size,x,i,count=0,first_position=-1;
	printf("Enter size of array :");
	scanf("%d",&size);
	int a[size];
	printf("Enter the elements of array :");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number you want to find :");
	scanf("%d",&x);
	for(i=0;i<size;i++)
	{
		if(a[i]==x)
		{
			count++;
			if(first_position==-1)
			{
				first_position=i+1;
			}
		}
	}
	if(first_position!=-1)
	{
		printf("%d occured %d times in array and its first occurence was at %d",x,count,first_position);
	}
	else
	{
		printf("%d was not found in array",x);
	}
	
	return 0;
}
