#include<stdio.h>
int main()

{
    int a,b,c,i;
    int mon[12] ={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==12&& b==25)
            printf("E natal!\n");
        else if( a== 12 && b==24)
             printf("E vespera de natal!\n");
        else if( a==12 &b>25)
        printf("Ja passou!\n");
        else
        {
            c=mon[a-1]-b;
            for(i=a;i<12;i++)
            {
                c+=mon[i];


            }
           printf("Faltam %d dias para o natal!\n", c);


        }

    }

    return 0;
}
