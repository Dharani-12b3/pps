#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number \n");
	scanf("%d",&num);
	if(num>0)
	printf("%d is positive",num);
	if(num<0)
	printf("%d is negative",num);
	if(num==0)
	printf("number  is zero");
	return 0 ;
}
