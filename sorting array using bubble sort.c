#include<stdio.h>
int main()
{
	int a[30],i,j,temp=0,n,count=0;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i = 0; i < n; i++)
	{
	 scanf("%d", &a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				count=1;
				
			}
		}
	}
	printf("The sorted array is\n");
	if(count==1)
	{
		for(i = 0; i < n; i++)
			printf("%d\n", a[i]);
	}
	
	
	return 0;
}
