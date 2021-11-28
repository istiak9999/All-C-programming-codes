#include<stdio.h>
int main()
{
    int a,b,c=0,i;
    scanf("%d %d",&a,&b);
    while(b<=0)
    {
        scanf("%d",&b);

    }
    for(i=1;i<=b;i++)
    {
        c=c+a;
        a++;
    }
    printf("%d\n",c);



    return 0;
}
