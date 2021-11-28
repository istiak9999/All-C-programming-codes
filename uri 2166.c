#include<stdio.h>
int main()
{
    double n,ans =0.0;
    scanf("%lf",&n);
    while(n--)
    {
        ans+=2.00;
        ans=1/ans;

    }
    ans+=1;
    printf("%.10lf\n",ans);

    return 0;
}
