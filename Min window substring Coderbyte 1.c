
#include <stdio.h>
#include <string.h>



int main(void) {
    char a[1000];
    int temp,i,count=0,num=0;
    gets(a);
    int len=strlen(a);
    if(len>=4&&len<=25 && a[len-1]!='_')
    {

        if((a[0]>='a'&& a[0]<='z' )|| (a[0]>='A'&& a[0]<='Z'))
           {
               for(i=0;i<len-1;i++)
                {
                    temp=(int)a[i];
                        if(temp==95||(temp>=65&& temp<=90 )|| (temp>=97&& temp<=122)||(temp>=0 &&temp<=9))
                            {
                                num++;}
                }


                if( num==len)
                                          printf("true");

                else count++;





                }


        else count++;


    }
    else count++;
if(count>0)printf("false");

return 0;
}
