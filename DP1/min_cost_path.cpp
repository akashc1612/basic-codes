#include <bits/stdc++.h>
using namespace std;
int  minCostPath(int **input,int m,int n,int i, int j,int **arr)
{
    if(i==m-1 && j==n-1)
    {
        arr[i][j]=input[i][j];
        return arr[i][j];
    }
    if(i>=m || j>=n)
    {
        return INT_MAX;
    }
    if(arr[i][j]!=-1)
    {
        return arr[i][j];
    }
    int ans1= minCostPath(input,m,n,i,j+1,arr);
        if(ans1<INT_MAX)
        {
            arr[i][j+1]=ans1;
        }
    
    int ans2= minCostPath(input,m,n,i+1,j+1,arr);
         if(ans2<INT_MAX)
        {
            arr[i+1][j+1]=ans2;
        }
    int ans3= minCostPath(input,m,n,i+1,j,arr);
         if(ans3<INT_MAX)
        {
            arr[i+1][j]=ans3;
        }
    arr[i][j]=min(ans1,min(ans2,ans3))+input[i][j];
    return arr[i][j];
}
int minCostPath(int **input, int m, int n)
{
	//Write your code here
    int **arr=new int *[m];
    for(int i=0;i<m;i++)
    {
           arr[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            arr[i][j]=-1;
        }
    }
    return minCostPath(input,m,n,0,0,arr);
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