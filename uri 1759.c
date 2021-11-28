#include <stdio.h>

int main() {
int a,i;
char b[10]="Ho";
scanf("%d",&a);
for(i=1;i<=a;i++)
{
    printf("%s",b);
    if(i==a)printf("!\n");
    else printf(" ");

}

    return 0;
}
