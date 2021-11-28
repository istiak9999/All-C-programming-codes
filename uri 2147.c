
#include<stdio.h>
int main()
{
    int t,len;
    scanf("%d",&t);
    char st[10100];
    while(t--)
    {
        scanf("%s",&st);
        len=strlen(st);
        printf("%.2lf\n",len*.01);


    }


    return 0;
}
