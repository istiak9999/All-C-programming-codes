#include<stdio.h>
long int addnumbers(int n);
int main()
{
    int num;
    scanf("%d",&num);
    printf("Sum of %d = %d",num,addnumbers(num));

    return 0;


}

long int addnumbers(int n)
{
    if (n==0)
        return n;
    else
        return n+addnumbers(n-1);



}
