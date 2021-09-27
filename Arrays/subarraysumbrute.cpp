#include <iostream>
#include<climits>
using namespace std;
void sum(int *arr,int n)
{
    int largest;
     largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp=i;
            int sum=0;
            while(temp<=j)
            {
                sum=sum+arr[temp];
                cout<<arr[temp]<<' ';
                temp++;
            }
            cout<<endl;
            cout<<"Sum:"<<sum<<endl;
            
            if(sum>largest)
            {
                largest=sum;
            }
        }
    }
    cout<<"Largest sum of subarray is:"<<largest;
}
int main()
{
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 sum(arr,n);
    return 0;
}
