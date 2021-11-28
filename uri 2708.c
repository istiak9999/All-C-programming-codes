#include<stdio.h>
#include<string.h>
int main()
{
    char string[6];
    int a,g=0,c=0,tg=0,tc=0,sc=0,st=0,t;
   for(;;)
    {scanf("%s",&string);

     if(string[0]=='A')break;
       else  {scanf("%d",&t);
   if(string[0]=='S')
    {tg+=t;
      g++;
     }
    else if(string[0]=='V')
        {tc+=t;
       c++;}
    }

    }
    printf("%d\n%d\n",tg-tc,g-c);
    return 0;
}
