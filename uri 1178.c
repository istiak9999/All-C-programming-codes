#include <stdio.h>
int main()
{
    int N[100], y;
    double x;
    scanf ("%lf", &x);
    for(y=0; y<100; y++)
    {
        printf("N[%d] = %.4lf\n",y,x);
       x/=2;;

    }
    return 0;
}
