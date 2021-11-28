#include <stdio.h>
int main()
{
    double a,b=1,c, S=0,d=2;
    for(a=1; a<=39; a+=2)
    {
        c=a/b;
        b*=2;
        S+=c;

    }
    printf("%.2lf\n",S);
    return 0;
}

