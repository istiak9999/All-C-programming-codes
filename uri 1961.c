#include<stdio.h>
int main()
{

    int p,q,count=0,a=0,b,i,j;
    scanf("%d %d",&p,&q);
    int ar[q];
    for(i=0;i<q;i++)
    scanf("%d",&ar[i]);
    for(i=0;i<q;i++)
    {
        if(ar[i]>ar[i-1])

            a=ar[i]-ar[i-1];
          else
              a=ar[i-1]-ar[i];
          if(a<=p)
            count++;





    }
    if(count==q-1)printf("YOU WIN\n");
    else printf("GAME OVER\n");


    return 0;
}
