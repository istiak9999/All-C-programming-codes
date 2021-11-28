#include<stdio.h>
int main()
{
    char ar[]="abcdefghijklmnopqrstuvwxyz";
    int i,j;
    for(i=0;ar[i]!='\0';i++)
    {if(ar[i]=='t'){
       j=i;
       break;
    }

    }

     printf("Using linear search tometos are at index position: %d\n",j);



    return 0;
}
