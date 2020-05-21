#include <bits/stdc++.h>
using namespace std;
int weight[] = {1,2,5,6,7};
int cost[] = {1,6,18,22,28};
int n = 5;
int W = 12;
int maxprofit = 0;
void knapsack(int at, int w, int profit)
{
	if (at > n)
		return;
	for (int i = at; i < n; i++)
	{
		if (w + weight[at] <= W)
		{
			maxprofit = max(maxprofit, profit + cost[at]);
			knapsack(at + 1, w + weight[at], profit + cost[at]);
		}
		else
		{
			return;
		}
		knapsack(at + 1, w, profit);
	}
}
int main()
{
	knapsack(0, 0, 0);
	cout << maxprof;
}
