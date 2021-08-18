#include<stdio.h>
int main()
{
	int a[30],i,key,n,right,left,mid;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("Enter the key element\n");
	scanf("%d",&key);
	left=0;
	right=n-1;
	while(left>=right)
	{
		mid=(left+right)/2;
		if(key == a[mid])
		break;
		else
		{
			if(key>a[mid])
			left=mid+1;
			else
			right=mid-1;
		}
	}
	if(key==a[mid])
	printf("the key element is found at position %d ",mid+1);
	else
	printf("the key element is not found");
	return 0;
}
