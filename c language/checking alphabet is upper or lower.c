#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the alphabet \n");
	scanf("%c",&ch);
	if(ch>065||ch<122)
		if(ch>065||ch<91)
		printf("%c  is  lower alphabet",ch);
		else
		printf("%c is upper alphabet",ch);
	else
	printf(" %c not is alphabet ",ch);
	return 0 ;
}
