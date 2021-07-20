#include<stdio.h>
int main()
{
	float a ,b, c, sum, product  ,avg;
	printf("\n enter the numbers : ");
	scanf("%f,%f,%f",&a,&b,&c);
	sum = a+b+c ;
	product = a*b*c ;
	avg = sum/3 ;
	printf("\nsum : %f",sum);
	printf("\nproduct : %f",product);
	printf("\navg : %3f",avg);
	return 0;
}
