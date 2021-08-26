#include<stdio.h>
int smallest(int[],int);
int largest(int[],int);
int Sum(int[],int);
float Avg(int[],int);
int main()
{
	int A[20],i,n,choice;
	printf("\nEnter number of elements ");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	
	printf("1.Smallest\n2.Largest\n3.Sum\n4.Average\n");
	printf("Choice option: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("%d",smallest(A,n));
		break;
		case 2:printf("%d",largest(A,n));
		break;
		case 3:printf("%d",Sum(A,n));
		break;
		case 4:printf("%f",Avg(A,n));
		break;
		default:printf("invalid choice is entered");
	}

}
int smallest(int A[],int n)
{
	int i, min=1000000;
	for(i=0;i<n;i++)        
	{
		min= min>A[i]?A[i]:min;           
	}
	return min;
}
int largest(int A[],int n)
{
	int max=0,i;
	for(i=0;i<n;i++)        
	{
	  	max= max<A[i]?A[i]:max;            
	}
	return max;
}

int Sum(int A[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)        
	{
		sum += A[i]; 	               
	}
	return sum;
}

float Avg(int A[],int n)
{
	int sum=0,i;
	float avg;
	for(i=0;i<n;i++)        
	{
		sum += A[i]; 	               
	}
	avg=sum/(float)n;
	return avg;
}



    
