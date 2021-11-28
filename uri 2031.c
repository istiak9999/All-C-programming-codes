#include<stdio.h>
int main()
{ char a[10],b[10];

int n,i,j;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
    char a[10],b[10];
    gets(a);
    gets(b);
if(a[1]=='e'&&b[1]=='e')printf("Sem ganhador\n");
else if(a[1]=='a'&&b[1]=='a')printf("Ambos venceram\n");
else if(a[1]=='t'&&b[1]=='t')printf("Aniquilacao mutua\n");

else if(a[1]=='t'||(a[1]=='e'&&b[1]=='a'))printf("Jogador 1 venceu\n");
else  printf("Jogador 2 venceu\n");

}


    return 0;
}
