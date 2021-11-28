#include <stdio.h>

int main() {

int a,b,c,i;

char name[10];
scanf("%d",&a);
for(i=0;i<a;i++)
{

    scanf("%s %d",&name,&b);
    if (name[0]=='T'&&name[1]=='h'&&name[2]=='o'&&name[3]=='r')
    printf("Y\n");
  else printf("N\n");

}
    return 0;
}
