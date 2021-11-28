#include<stdio.h>
int main()
{
    int N[20],i,temp,b=19,a=0;
        for(i=0;i<=19;i++)
    {
        scanf("%d",&N[i]);

    }
    for(i=0;i<10;i++)
    {
        temp=N[a];
        N[a]=N[b];
        N[b]=temp;
        a++;
        b--;


    }
            for(i=0;i<=19;i++)
    {
        printf("N[%d] = %d\n",i,N[i]);

    }

return 0;

}
