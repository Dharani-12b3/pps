#include<stdio.h>
int main()
{
	int num1,num2,max=0;
	printf("Enter the numbers \n");
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
	max=num1;
	else
	max=num2;
	printf("maximum number is %d",max);
	
	return 0 ;
}
