#include<stdio.h>
long int fact(int n);
int main()
{
    int n;
   scanf("%d",&n);
printf("%d",fact(n));
    return 0;
}


long int fact(int n)
{
    if (n==1)
    return 1;
    else
     return   n*fact(n-1);



}
