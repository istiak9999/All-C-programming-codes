#include<stdio.h>
#include<string.h>
int main()

{
 char str[100];
 int i,words;
 words=0;
 gets(str);

 for(i=0; str[i]!= '\0'; i++)
 {
	if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
    {

       words++;
    }

 }

printf("%d",words);



    return 0;
}
