#include<stdio.h>

#include<math.h>

int main()
{
    double a=0,m[12][12];
    int l,i,j,k=0,b=11;
    char c[3];
    scanf("%d",&l);
    scanf("%s",&c);

    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&m[i][j]);
            if(i==k && j>b)
            {
                a+=m[i][j] ;}
}
k++;b--;
    }


   if(c[0]=='S')
   {
       printf("%.1lf\n",a);

   }
   else if(c[0]=='M')
   {
       printf("%.1lf\n",a/66);

   }


return 0;

}
