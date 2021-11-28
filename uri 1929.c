#include<stdio.h>
int main()
{
    int ar[4],i,j,a,b,e;
    for(i=0;i<4;i++)
        scanf("%d",&ar[i]);


        for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(ar[i]>ar[j])
            {


            e=ar[i];
            ar[i]=ar[j];
            ar[j]=e;



            }
        }
    }

          a=ar[1]+ar[2];
    b=ar[0]+ar[1];
    if(ar[3]<a || ar[2]<b) printf("S\n");
    else printf("N\n");
    return 0;

}
