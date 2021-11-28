#include <stdio.h>


int max(int a, int b) { return (a > b) ? a : b; }

int knapSack(int W, int wt[], int val[], int n)
{

	if (n == 0 || W == 0)
		return 0;


	if (wt[n - 1] > W)
		return knapSack(W, wt, val, n - 1);


	else
		return max(
			val[n - 1]
				+ knapSack(W - wt[n - 1],
						wt, val, n - 1),
			knapSack(W, wt, val, n - 1));
}

void knapsack(int n, float weight[], float profit[], float capacity) {
   float x[20], tp = 0;
   int i, j, u;
   u = capacity;

   for (i = 0; i < n; i++)
      x[i] = 0.0;

   for (i = 0; i < n; i++) {
      if (weight[i] > u)
         break;
      else {
         x[i] = 1.0;
         tp = tp + profit[i];
         u = u - weight[i];
      }
   }

   if (i < n)
      x[i] = u / weight[i];

   tp = tp + (x[i] * profit[i]);

   printf("\nThe result vector is:- ");
   for (i = 0; i < n; i++)
      printf("%.2f\t", x[i]);

   printf("\nMaximum profit is:- %.2f", tp);

}


int main ()
{
int a;
    printf("If you want to use Dynamic knapsack enter 1 or if you want to use Greedy knapsack enter 2 :");
    scanf("%d",&a);
    if(a==1)
    { int N;
printf("Enter The Number Of items:");
    scanf("%d",&N);


	int val[N], wt[N] ,i;
	printf("Enter Values:");

	for(i=0;i<N;i++)
        {
            scanf("%d",&val[i]);
        }
		printf("Enter Weights:");

	for(i=0;i<N;i++)
        {
            scanf("%d",&wt[i]);
        }

	int W ;
	printf("Enter the capacity:");
	scanf("%d",&W);
	int n = sizeof(val) / sizeof(val[0]);
	printf("Maximum Value Using O/1 knapsack = %d", knapSack(W, wt, val, n));
	return 0;







    }
    else{

       int num, i, j;


   printf("\nEnter the no. of objects:- ");
   scanf("%d", &num);
   float weight[num], profit[num], capacity;
      float ratio[num], temp;
   printf("\nEnter the weights and profits of each object: ");
   for (i = 0; i < num; i++) {
      scanf("%f %f", &weight[i], &profit[i]);
   }

   printf("\nEnter the capacityacity of knapsack:- ");
   scanf("%f", &capacity);

   for (i = 0; i < num; i++) {
      ratio[i] = profit[i] / weight[i];
   }

   for (i = 0; i < num; i++) {
      for (j = i + 1; j < num; j++) {
         if (ratio[i] < ratio[j]) {
            temp = ratio[j];
            ratio[j] = ratio[i];
            ratio[i] = temp;

            temp = weight[j];
            weight[j] = weight[i];
            weight[i] = temp;

            temp = profit[j];
            profit[j] = profit[i];
            profit[i] = temp;
         }
      }
   }

   knapsack(num, weight, profit, capacity);
   return(0);


    }



}






