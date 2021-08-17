/* To reverse of a given number*/
#include<stdio.h>
int main()
{
	int num,r,rev=0,sum=0,n;
	printf("enter the number\n");
	scanf("%d",&num);
	n = num;
	do
	{
		r = num % 10;
		rev = 10*rev + r;
		num = num/10;
		sum = sum+r;
		
	}while (num!=0);
	if(n==rev)
		printf("\nis palindrome");
	else
		printf("\nnot a palindrome");	
	printf("\n sum is %d",sum);
	return 0;
}
