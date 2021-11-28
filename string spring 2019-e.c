#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i;
    gets(a);
    for(i=0;a[i];i++)
    {
        if(a[i]>='a' && a[i]<='y')
      printf("%c",a[i]);


    }



    return 0;
}
