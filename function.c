#include<stdio.h>
int main()
{
    int n,a,c;
    scanf("%d",&n);
    a=square(n);
    c=cube(n);
    printf("%d\n",a);
    printf("%d",c);
return 0;
}
int square(int n)
{int s;
   s=n*n;
   return s;

}
int cube(int n)
{ int z;
   z=n*n*n;
   return z;

}
