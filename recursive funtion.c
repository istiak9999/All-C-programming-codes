#include<stdio.h>
int main()
{
    int x=2,y=10,avr;
    avr=avrage(x,y);



    return 0;
}int avrage(int x,int y)
{
if (x>=10)
    return;
printf("%d",x);
avrage(x+1,y);


}
