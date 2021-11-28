#include <stdio.h>
#include <string.h>
int main()
{
   char s[1000];
   gets(s);

   strrev(s);

   printf("%s\n", s);

   return 0;
}
