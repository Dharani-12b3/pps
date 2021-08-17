#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the marks percentage \n");
	scanf("%d",&marks);
	if(marks>=70)
	printf("Distinction");
	else if(marks>=60 && marks<70)
	printf("First class");
	else if(marks>=40 && marks<60)
	printf("Second class");
	else
	printf("Failed");

	return 0;
}
