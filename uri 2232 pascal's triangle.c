#include <stdio.h>
#include<math.h>
int main() {

int t,i,a,j;
long long int sum=0;
scanf("%d",&t);
for(i=1;i<=t;i++)
{ sum=0;
    scanf("%d",&a);
    for(j=0;j<a;j++)
      sum+= pow(2,j);

    printf("%lld \n",sum);

}

    return 0;
}


