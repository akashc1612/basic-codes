#include <bits/stdc++.h>
using namespace std;
int countStepsToOne(int n, int *arr)
{
    if(n==1)
    {
        arr[n]=0;
        return arr[n];
    }
    int option1=countStepsToOne(n-1,arr);
    arr[n-1]=option1;
    int op2=INT_MAX;
    int op3=INT_MAX;
    if(n%2==0)
    {
        if(arr[n/2]==-1)
        {
            int option2=countStepsToOne(n/2,arr);
            arr[n/2]=option2;
        }
         op2=arr[n/2];
    }
    if(n%3==0)
    {
        if(arr[n/3]==-1)
        {
            int option3=countStepsToOne(n/3,arr);
            arr[n/3]=option3;
        }
        op3=arr[n/3];
    }
    arr[n]=min(option1,min(op2,op3))+1;
    return arr[n];
}
int countStepsToOne(int n)
{
	//Write your code here
   int *arr=new int [n+1];
    for(int i=0;i<=n;i++)
    {
        arr[i]=-1;
    }
    return countStepsToOne(n,arr);
}

int main()
{
	int n;
	cin >> n;
	cout << countStepsToOne(n);
}