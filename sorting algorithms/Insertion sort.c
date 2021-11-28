#include<stdio.h>
int main(){

   int i, j, n, temp, array[25];

   printf("How many numbers u are going to enter?: ");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   for(i=0;i<n;i++)
      scanf("%d",&array[i]);

   for(i=1;i<n;i++){
      temp=array[i];
      j=i-1;
      while((temp<array[j])&&(j>=0)){
         array[j+1]=array[j];
         j=j-1;
      }
      array[j+1]=temp;
   }

   printf("Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d\n",array[i]);

   return 0;
}
