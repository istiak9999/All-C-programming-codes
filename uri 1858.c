#include<stdio.h>
int main()
{
    int a,b,c,i,d=0,e;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
{

    scanf("%d",&arr[i]);
}
c=arr[d];
e=1;
for(d=0;d<a;d++)
{
    if(arr[d]<c)
    {
        c=arr[d];
        e=d+1;
    }
}

    printf("%d\n",e);




    return 0;
}
