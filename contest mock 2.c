#include<stdio.h>
int main()
{
    long int n,k,sum;

    scanf("%ld %ld",&n,&k);
    sum=((n-k)*100)/n;
    printf("%ld\n",sum);


    return 0;
}

