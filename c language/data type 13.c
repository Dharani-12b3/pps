#include<stdio.h>
int main()
{
	int sec , m , h ,s ;
	printf("Enter number of sec :");
	scanf("%d",&sec);
	h = (sec/3600);
    m = ((sec%3600)/60);
    s = (sec-((h*3600)+(m*60)));
	printf("Hours: %d and Minute: %d and Seconds: %d\n",h,m,s);
	return 0;

}	

    
