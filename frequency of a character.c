#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100],ch;
  	int i,f=0;


  	printf("\n Please Enter any String :  ");
  	gets(str);
  	printf("enter the character:");
  	scanf("%c",&ch);

  	for(i = 0; str[i]; i++)
	{
 if(str[i]==ch)
		{
			f++;
		}
	}
	printf("\n frequency of %c is %d",ch,f);

  	return 0;
}
