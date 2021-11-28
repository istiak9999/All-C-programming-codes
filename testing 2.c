#include<stdio.h>
int main()
{
    int c=0,x,y,i;
    scanf("%d%d\n",&x,&y);
    for(i=1;i<=y;i++)
    {
        printf("%d",i);
        c++;
        if(c==x){
            printf("%d\n",i);
            c=0;
            }


    }

    return 0;

}
