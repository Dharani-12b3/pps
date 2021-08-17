#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the alphabet or symbol or digit \n");
	scanf("%c",&ch);
	if (ch>48&&ch<57||ch>65&&ch<122)
		if(ch>065&&ch<90||ch>97&&ch<122)
		printf("%c  is alphabet",ch);
		else
		printf("%c is digit",ch);
	else
	printf("%c is symbol",ch);	
	return 0 ;
}
