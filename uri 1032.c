#include <stdio.h>

int main() {

   int len;
    char ak[1000];
   gets(ak);
   len=strlen(ak);
   if(len<=140)
   printf("TWEET\n");
   else
   printf("MUTE\n");

    return 0;
}
