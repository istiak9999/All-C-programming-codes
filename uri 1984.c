#include <stdio.h>
#include<string.h>
int main() {
    char num[25],temp;
    int i,j,length;
    gets(num);
    length=strlen(num);
    for(i=0,j=length-1;i<length/2;i++,j--)
    {
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;



    }

printf("%s\n",num);


return 0;
}
