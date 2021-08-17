#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number \n");
	scanf("%d",&num);
	if(num%3==0&&num%5==0)
	printf("%d is divisible by both 3 and 5",num);
	return 0 ;
}
