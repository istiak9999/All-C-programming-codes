#include <stdio.h>
int main()
{
    int t,x,y,i,j,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&x,&y);
        if (x==y)
            printf("0\n");
        else if (x<y){
        for(j=x+1;j<y;j++)
        {
            if(j%2!=0)
            {
                sum+=j;

            }

        }
        printf("%d\n",sum);
        sum=0;
        }
        else if (y<x){
                 for(j=y+1;j<x;j++)
        {
            if(j%2!=0)
            {
                sum+=j;

            }

        }
        printf("%d\n",sum);
        sum=0;
        }
    }






    return 0;
}
