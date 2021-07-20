#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,dis;
	printf(" \n enter the coordinate x1,y1 :");
	scanf("%f,%f",&x1,&y1);
	printf("\n enter the coordinate x2,y2 :");
	scanf("%f,%f",&x2,&y2);
	dis =  ((x2-x1)*(x2 - x1) + (y2 - y1)*(y2-y1));
	printf("the distance between coordinates is : %4f",sqrt(dis));
	return 0;
}
