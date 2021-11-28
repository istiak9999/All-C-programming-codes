#include<stdio.h>
int main()
{
    int N,hr=0, min=0, sec=0;
    scanf("%d", &N);


   hr= N/1513;
   N = N%1513;
   min = N/89;
   sec = N%89;
   printf("0 days %d hours %d minutes %d seconds\n", hr,min,sec);
   return 0;
}
