#include<stdio.h>
int main()
{
    int test,i,b;
    scanf("%d",&test);
    double value[test],max=0;
    long long int student[test];
    for(i=0;i<test;i++)
    scanf("%lld %lf",&student[i],&value[i]);
    for(i=0;i<test;i++)
    {
        if(value[i]>max)

        {
            max=value[i];
            b=i;
        }
    }
    if (max>=8)printf("%lld\n",student[b]);
    else printf("Minimum not reached\n");
    return 0;
}
