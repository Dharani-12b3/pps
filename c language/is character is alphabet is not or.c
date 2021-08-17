#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the alphabet \n");
	scanf("%c",&ch);
	if(ch>065||ch>122)
	printf("%c  is alphabet",ch);
	else
	printf("%c is not alphabet",ch);
	return 0 ;
}
