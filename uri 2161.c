#include <stdio.h>
#include<math.h>
int main() {
 double n,ans=0;
 scanf("%lf",&n);
 while(n--)
 {
     ans+=6.0;
     ans=1/ans;
 }
 ans+=3.0;
printf("%.10lf\n",ans);
    return 0;
}
