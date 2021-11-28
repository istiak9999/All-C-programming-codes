#include<stdio.h>
#include<stdlib.h>



int main()
{
    int tc;
    while(scanf("%d",&tc)&&tc!=0)
    {
        int a,b,c=0,d=0;
      while(tc--)
        {
            scanf("%d %d",&a,&b);
            if(a>b)
            {


                c++;}
            else if(b>a)
            {


                d++;}

        }


        printf("%d %d\n",c,d);


    }








    return 0;
}
