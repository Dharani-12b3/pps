#include <stdio.h> 
 int main() 
 {
    char char1 ,char2,char3;
    printf("enter the char1:");
    scanf("%c",&char1);
    printf("enter the char2:");
    scanf("\n%c",&char2);
    printf("enter the char3:");
    scanf("\n%c",&char3);
    printf("The reverse of %c%c%c is %c%c%c\n",
		char1, char2, char3,
		char3, char2, char1);

	return(0);
}

