#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n)
{
    int currentsum=0;
    int largestsum=0;
    for(int i=0;i<n;i++)
    {
        currentsum=currentsum+arr[i];
        if(currentsum<0)
        {
            currentsum=0;
            continue;
        }
        else if(currentsum>largestsum)
        {
            largestsum=currentsum;
        }
    }
    return largestsum;
}
int main()
{
  int arr[100],n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  int output=kadane(arr,n);
  cout<<output;

    return 0;
}
