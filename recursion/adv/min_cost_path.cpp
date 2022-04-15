#include <bits/stdc++.h>
using namespace std;

int  minCostPath(int **input,int m,int n,int i, int j)
{
    if(i==m-1 && j==n-1)
    {
        return input[i][j];
    }
    if(i>=m || j>=n)
    {
        return INT_MAX;
    }
    int ans1= minCostPath(input,m,n,i,j+1);
    int ans2= minCostPath(input,m,n,i+1,j+1);
    int ans3= minCostPath(input,m,n,i+1,j);
    return min(ans1,min(ans2,ans3))+input[i][j];
}
int minCostPath(int **input, int m, int n)
{
	//Write your code here
    return minCostPath(input,m,n,0,0);
}

int main()
{
	int **arr, n, m;
	cin >> n >> m;
	arr = new int *[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << minCostPath(arr, n, m) << endl;
}