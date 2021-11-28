#include<stdio.h>


int josephus_loop(int n,int m,int sp)
{
    int nsp,survior;
    if(n==1)
        return 1;
    nsp=(sp+m-2)%n+1;
    survior=josephus_loop(n-1,m,nsp);
    if(survior<nsp)
        return survior;
    else
        return survior+1;









}

int josephus(int n,int m)
{
    return josephus_loop(n,m,1);
}



int main()
{
    int tc,n,m,s,i;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d %d",&n,&m);
        s=josephus(n,m);
printf("Case %d: %d\n",i,s);


    }









}
