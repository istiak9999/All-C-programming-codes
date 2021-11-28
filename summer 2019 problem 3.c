#include<stdio.h>
int main()
{
    char a,b;
    int c;
    scanf("%c %c %d",&a,&b,&c);
    if(a=='F'|| (40<c && c<60))
        printf("You will work in Urban Areas\n");
    else
        printf("You can work anywhere\n");


    return 0;
}
