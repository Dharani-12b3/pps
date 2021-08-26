#include<stdio.h>
int main()
{
	int n,result;
	printf("enter the number \n");
	scanf("%d",&n);
	result=fact(n);
	printf("factorial of %d is %d",n,result);
	
}
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
