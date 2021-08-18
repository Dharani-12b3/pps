#include<stdio.h>
#include<conio.h>
int main()
{
 int i, a[20], n, key, flag = 0;
 printf("enter the size of the array\n");
 scanf("%d", &n);
 printf("enter array elements\n");
 for(i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 printf("enter the key elements\n");
 scanf("%d", &key);
 for(i = 0; i < n; i++)
 {
  if(a[i] == key)
  {
   flag = 1;
   break;
  }
 }
 if(flag == 1)
  printf("the key element is found at position %d",i+1);
 else
  printf("the key element is not found in the array");
 return 0;
}
