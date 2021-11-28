#include<stdio.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;


    int L[n1], R[n2];


    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }


    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int l, int r)
{
    if (l < r) {

        int m = l + (r - l) / 2;


        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}
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


void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main(){

   int i, j, n, temp, array[25],search,first,last,middle;

   printf("How many numbers u are going to enter: ");
   scanf("%d",&n);

   printf("Enter %d elements:\n", n);
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

   printf("Sorted elements:\n");
   for(i=0;i<n;i++)
      printf(" %d\n",array[i]);

        printf("Enter the value to find using linear search:\n");
   scanf("%d", &search);
    for(i=0;i<n;++i){
        if(array[i]==search){
            printf("using linear search index of the element is %d\n",i);
            break;
        }

    }

       printf("Enter the value to find using binary search:\n");
   scanf("%d", &search);
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;
      else if (array[middle] == search) {
         printf("using binary search %d is present at index %d.\n", search, middle);
         break;
      }
      else
         last = middle - 1;
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);

printf("Now we are sorting an array using merge sort.\n");

    int arr[] = { 13, 2, 6, 8, 9, 15 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);

    int qarr[]={25,23,16,37,43,23,45.76,10,22};
    int qn=sizeof(qarr)/sizeof(qarr[0]);
    printf("Now we are sorting array by quick sort.\ngiven array is :\n");
    printArray(qarr,qn);



quickSort(qarr,0,qn-1);
printf("Sorted array by quick sort : \n");
printArray(qarr,qn);
return 0;

   return 0;
}

