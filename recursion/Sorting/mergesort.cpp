#include <iostream>
using namespace std;

void mergesort2(int arr[],int first[],int second[],int n,int size1,int size2)
{
 int i=0,j=0,k=0;
 while(i<size1 and j<size2)
 {
     if(first[i]>second[j])
     {
         arr[k]=second[j];
         j++;
         k++;
     }
     else if(first[i]<second[j])
     {
         arr[k]=first[i];
         k++;
         i++;
     }
 }
 while(i<size1)
 {
     arr[k]=first[i];
     i++;
     k++;
 }
 while(j<size2)
 {
     arr[k]=second[j];
     j++;
     k++;
 }
}
void mergesort(int arr[],int n)
{
    if(n==0 or n==1)
    {
        return;
    }
    int first[100000],second[100000];
    int mid=n/2;
    for(int i=0;i<mid;i++)
    {
        first[i]=arr[i];
    }
    int k=0;
    for(int j=mid;j<n;j++)
    {
        second[k]=arr[j];
        k++;
    }
    int size1=mid;
    int size2=n-mid;
    mergesort(first,size1);
    mergesort(second,size2);
    mergesort2(arr,first,second,n,size1,size2);
}
int main()
{
int arr[100000];
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
mergesort(arr,n);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<' ';
}
    return 0;
}
