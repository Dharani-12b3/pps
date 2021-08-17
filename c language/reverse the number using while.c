/* To reverse of a given number*/
#include<stdio.h>
int main()
{
	int num,r,rev=0;
	printf("enter the number\n");
	scanf("%d",&num);
	while (num!=0)
	{
		r = num % 10;
		rev = 10*rev + r;
		num = num/10;
		
		
	}
	printf("%d",rev);
	return 0;
}
