#include<stdio.h>
int main()
{
	char gender;
	printf("enter the gender\n");
	scanf("%c",&gender);
	switch(gender)
	{
		case 'f':
		case 'F':
		printf("female");
		break;
		case 'M':
		case 'm':
		printf("male");
		break;
			
	}
}
