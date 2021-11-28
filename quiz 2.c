#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="akdumbakdumghorardumsaje";
    for(int i=0;a[i]!=0;i+=2)
    {
        if(i%2==0)
            printf("%c\n",a[i++]);

               if(i%3==0)
            printf("%c\n",a[--i]);
                    if(i%5==0)
            printf("%c\n",a[i-5]);


    }




    return 0;
}
