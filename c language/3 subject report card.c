#include<stdio.h>
int main()
{
	int math,pps,phy,total_marks,p;
	printf("enter physics, pps  marks out of 25\n");
	printf("enter maths marks out of 50\n");
	scanf("%d %d %d",&math,&pps,&phy);
	total_marks=math+pps+phy;
	p = (total_marks/100)*100;
	if(p>=90)
	printf("grade a");
	else if(p>=80)
	printf("grade b");
	else if(p>=70)
	printf("grade c");
	else if(p>=60)
	printf("grade d");
	else if(p>=40)
	printf("grade e");
	else
	printf("grade f");
	return 0;
}
