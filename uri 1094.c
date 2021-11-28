#include<stdio.h>
int main()
{
    int n,j,C=0,R=0,S=0,v,i;
    double x,y,z;
    char t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %c",&j,&t);
        if(t=='C') C+=j;
        else if(t=='R') R+=j;
        else if(t=='S')S+=j;
    }
    v=C+R+S;
    x=(C/(v*1.0))*100.00;
    y=(R/(v*1.0))*100.00;
    z=(S/(v*1.0))*100.00;
    printf("Total: %d cobaias\n",v);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2lf %%\n",x);
    printf("Percentual de ratos: %.2lf %%\n",y);
    printf("Percentual de sapos: %.2lf %%\n",z);

    return 0;
}
