#include<stdio.h>
int main()
{
    int j,i=0,g=0,c=0,d=0;
    for(j=1;j>0;j++)
    {
        int a,b,t;
        scanf("%d %d",&a,&b);
                if(a>b)i++;
        else if(b>a)g++;
        else if(a==b)
            d++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&t);
        c++;
        if(t==2)break;

    }
    printf("%d grenais\n",c);
    printf("Inter:%d\n",i);
        printf("Gremio:%d\n",g);
            printf("Empates:%d\n",d);
        if(i>g)printf("Inter venceu mais\n");
        else if(g>i)printf("Gremio venceu mais\n");
        else if(i==g)
printf("Não houve vencedor\n");







    return 0;
}
