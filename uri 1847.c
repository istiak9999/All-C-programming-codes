#include<stdio.h>
int main()
{

    int a,b,c,d,e;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b<=c)printf(":)\n");
   else  if(a<b && c<=b)printf(":(\n");
   else if(a<b && b<c)
        { d=b-a;
            e=c-b;
            if(e<d)  printf(":(\n");
            else printf(":)\n");
       }
    else if(a>b && c>=b)

    {
    if(a-b<b-c) printf(":)\n");
    else printf(":(\n");

    }

   else if(a==b)
   {if (c>b)
       printf(":)\n");
else printf(":(\n");

   }





    return 0;
}
