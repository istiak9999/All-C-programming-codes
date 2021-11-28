#include<stdio.h>
int main()

{
    int x,y,i;
    for(i=1;i>0;i++)
    {
        scanf("%d %d",&x,&y);
        if (x==y)
            break;
        else if(x<y)
            printf("Crescente\n");
        else if (y<x)
          printf("Decrescente\n");



    }

return 0;

}
