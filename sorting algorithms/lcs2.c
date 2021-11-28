#include<stdio.h>
#include<string.h>
int i,j,m,n,c[10][10],l;
char x[10],y[10],b[10][10];
void print(int i, int j){
    l=0;
    if(i==0 || j==0)
    	return;
    if(b[i][j]=='C')
    {
    print(i-1,j-1);
	printf("%c",x[i-1]);
	l++;
	}
    else if(b[i][j]=='U')
        print(i-1,j);
    else
        print(i,j-1);

}
void lcs(){

        m=strlen(x);
        n=strlen(y);
        for(i=0;i<=m;i++)
          	c[i][0]=0;
        for(i=0;i<=n;i++)
            c[0][i]=0;
        for(i=1;i<=m;i++)
        for(j=1;j<=n;j++){
            if(x[i-1]==y[j-1]){
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='C';
                l++;
            }
            else if(c[i-1][j]>=c[i][j-1]){
                c[i][j]=c[i-1][j];
                b[i][j]='U';
            }
            else{
                c[i][j]=c[i][j-1];
                b[i][j]='L';
            }
        }
}
int main(){
	printf("1st sequence:");
	scanf("%s",x);
	printf("2nd sequence:");
	scanf("%s",y);


	printf("\nLongest Common Subsequence is ");
	lcs();

    print(m,n);
     printf("\nLength= %d",l);
    return 0;
}
