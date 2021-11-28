#include<stdio.h>
 int main()
{
    int i,n,smallest,p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    smallest=a[0];
    for(i=1;i<n;i++)
    {
    if (a[i]<smallest)
    {

        smallest=a[i];
         p=i+1;
       }
    }
    printf("%d %d",smallest,p);
    return 0;
}
