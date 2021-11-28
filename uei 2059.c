#include<stdio.h>
int main()
{
    int p1,p2,j1,j2,r,a,sum;
    scanf("%d %d %d %d %d",&p1,&j1,&j2,&r,&a);
    sum=j1+j2;
    if(p1==1)
    {
        if(sum%2==0)
        {
            if(r==0 && a==0)
                printf("Jogador 1 ganha!");
            else if(r==1 && a==0)
            printf("Jogador 1 ganha!");
            else if(r==1 && a==1)
                printf("Jogador 2 ganha!");
            if(r==0 && a==1)
            printf("Jogador 1 ganha!");
        }
            else
        {
            if(r==0 && a==0)
                printf("Jogador 2 ganha!");
            else if(r==1 && a==0)
            printf("Jogador 1 ganha!");
            else if(r==1 && a==1)
                printf("Jogador 2 ganha!");
            if(r==0 && a==1)
            printf("Jogador 1 ganha!");
        }

        }
    else if (p1==0)
    {
        if(sum%2==0)
        {
            if(r==0 && a==0)
                printf("Jogador 2 ganha!");
            else if(r==1 && a==0)
            printf("Jogador 1 ganha!");
            else if(r==1 && a==1)
                printf("Jogador 2 ganha!");
            if(r==0 && a==1)
            printf("Jogador 1 ganha!");
        }
            else
        {
            if(r==0 && a==0)
                printf("Jogador 1 ganha!");
            else if(r==1 && a==0)
            printf("Jogador 1 ganha!");
            else if(r==1 && a==1)
                printf("Jogador 2 ganha!");
            if(r==0 && a==1)
            printf("Jogador 1 ganha!");
        }

        }


printf("\n");







    return 0;
}
