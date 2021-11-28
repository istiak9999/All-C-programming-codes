#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,sum=0,a,b,c,d,tuk=0;
    char st[1000];
    scanf("%d",&a);
for(c=1;c<=a;c++)
    {
        scanf("%d",&b);
        sum=0;
        for(i=0;i<=b;i++)
        {
            gets(st);
            for(j=0,tuk=0;st[j]!='\0';j++)
            {
              d=(int) st[j]-65;
                tuk= j+i+d+tuk-1;

            }


            sum=sum+tuk;

        }
printf("%d\n",sum);



    }





    return 0;
}
