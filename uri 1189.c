#include<stdio.h>

#include<math.h>

int main()
{
    double x=0,y=0,z=0,o=0,u=0,v,t=0,m[12][12];
    int i,j;
    char c[3];
    scanf("%s",&c);

    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&m[i][j]);
            if(i>0&& i<11 &&j==0 )
            {
                x+=m[i][j] ;
                t++;
            }
            if(i>1&& i<10 &&j==1 )
            {
                y+=m[i][j] ;
                t++;
            }
            if(i>2&& i<9 &&j==2 )
            {
                z+=m[i][j] ;
                t++;
            }
            if(i>3&& i<8 &&j==3 )
            {
                o+=m[i][j] ;
                t++;
            }
                        if(i>4&& i<7 &&j==4)
            {
                u+=m[i][j] ;
                t++;
            }
    }

    }
v=x+y+z+o+u;

   if(c[0]=='S')
   {
       printf("%.1lf\n",v);

   }
   else if(c[0]=='M')
   {
       printf("%.1lf\n",v/t);

   }


return 0;


    }
