
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


int main()
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
