#include<stdio.h>
int main()
{
	int num1,num2,num3,max=0;
	printf("Enter the numbers \n");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1>num2)
	{
		if(num1>num3)
		max=num1;
		else
		max=num3;
	}
	else
	{
		if(num2>num3)
		max=num2;
		else
		max=num3;
	}
	printf("%d maximum number",max);
	return 0 ;
}
