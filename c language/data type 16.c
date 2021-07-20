#include<stdio.h>
int main()
{
	 int n, ps = 0, ns = 0, num,i;
     n =5;
      printf("\nEnter %d Numbers:\n\n",n);
      for(i=1;i<=n;i++)
      {
            scanf("%d",&num);
            if(num > 0)
                  ps=ps+num;
            else
                  ns=ns+num;
	}
      printf("Sum of Positive Numbers = %d\nSum of Negative Numbers = %d",ps,ns);
      return 0;			            
}
	
