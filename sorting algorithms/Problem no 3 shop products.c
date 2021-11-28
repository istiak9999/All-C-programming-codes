#include<stdio.h>
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int party (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = party(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

  void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
  int main()
  {
      int arr[99],i;
      printf("enter the unsorted array of product prices 1 to 99:\n");
            for(i=0;i<99;i++)
            {
                scanf("%d",&arr[i]);

            }

      int n=99;
    quickSort(arr,0,98);

      printf("Sorted Array by price of the products 1 to 99: \n");
      printArray(arr,n);
      return 0;



  }
