#include<stdio.h>
int main()

{
    int  i,j=60;
 for(i=1;i>0;i=i+3)
 {
     printf("I=%d J=%d\n",i,j);
     j-=5;
     if(j+5==0)
     {
         return 0;
     }


 }
}
