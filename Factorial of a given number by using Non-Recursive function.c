 #include<stdio.h>
int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
printf("factoria of %d is %d",n,fact(n));
}
int fact(int n)
{
int f=1,i;
if((n==0)||(n==1))
return(1);
else
{
for(i=1;i<=n;i++)
f=f*i;
}
return(f);
}
