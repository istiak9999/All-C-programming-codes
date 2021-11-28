#include<stdio.h>
int main()
{
    int a,b,i,z=1;
    scanf("%d %d",&a,&b);
    int c=a;
    while(b<=a)
    {
        scanf("%d",&b);

    }
        do
    { a++;
        c=c+a;
        z++;
    }while(c<b);
    printf("%d\n",z);



    return 0;
}

