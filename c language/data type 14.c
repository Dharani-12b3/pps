#include<stdio.h>
int main()
{
	int days , m , y ,d ;
	printf("Enter number of days :");
	scanf("%d",&days);
	y = (days/365);
    m = ((days%365)/30);
    d = (days-((y*365)+(m*30)));
	printf("Years: %d and Months: %d and Days: %d\n",y,m,d);

    return 0;  
}
