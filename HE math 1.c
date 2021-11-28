#include<stdio.h>
int main()
{
    int a,b,c,d,i,j;
    scanf("%d",&a);
    while(a--)
    { int s=0;
        scanf("%d",&b);
        for(i=1;i<b;i++)
        {
            if(b%i==0)
                s+=i;
        }
        printf("%d\n",s);



    }

    return 0;
}
