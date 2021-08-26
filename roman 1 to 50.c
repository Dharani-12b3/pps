#include<stdio.h>
int main()
{
	int num,ten,one,X,I,L,V;
	printf("enter the value between 1to 50 : ");
	scanf("%d",&num);
	ten = ((num/10)%10)*10;
	one = ((num/1)%10)*1;
	if(ten ==10)
	printf("X");
	else if(ten==20)
	printf("XX");
	else if(ten==30)
	printf("XXX");
	else if(ten==40)
	printf("Xl");
	else if(ten==50)
	printf("L");
	if(one==1)
	printf("I");
	else if(one==2)
	printf("II");
	else if(one==3)
	printf("III");
	else if(one==4)
	printf("IV");
	else if(one==5)
	printf("V");
	else if(one==6)
	printf("VI");
	else if(one==7)
	printf("VII");
	else if(one==8)
	printf("VIII");
	else if(one==9)
	printf("IX");
	return 0;
	
}
