#include <stdio.h>
#include <string.h>
int main()
{
   char str[20];
   int i, l, f = 0;
   printf("Enter any string\n");
   gets(str);
   l = strlen(str);
   for(i = 0; i <= l - 1; i++)
   {
      if(str[i] == str[l - 1 - i])
      f = f + 1;
   }
   if(f == l)
   {
      printf("The string is palindrome");
   }
   else
   {
      printf("The string is not a palindrome");
   }
   return 0;
}
