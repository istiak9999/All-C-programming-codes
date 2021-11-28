#include<stdio.h>
#include<stdlib.h>



int main()
{
    int tc;
    while(scanf("%d",&tc)&&tc!=0)
    {
        int a,c=0,d=0;
      while(tc--)
        {
            scanf("%d",&a);
            if(a==0)
            {


                c++;}
            else if(a==1)
            {


                d++;}

        }


        printf("Many won %d times and John won %d times\n",c,d);


    }








    return 0;
}

