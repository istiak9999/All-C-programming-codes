#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;


}
void selectionsort(int arr[],int n)
{
    int i,j,minindex;
    for(i=0;i<n-1;i++)
    {
        minindex=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
                minindex=j;


        }
  swap(&arr[minindex],&arr[i]);
    }



}

void printarray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
int main()
{

int arr[]={34,56,78,34,5};
int n= sizeof(arr)/sizeof(arr[0]);
selectionsort(arr,n);
printf("The Sorted Array is\n");
printarray(arr,n);
return 0;
}
