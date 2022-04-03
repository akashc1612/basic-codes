#include <iostream>

using namespace std;
int fib(int n,int arr[])
{
    if(n==0 or n==1)
    {
        arr[n]=n;
        return arr[n];
    }
    if(arr[n-1]==0)
    {
        arr[n-1]=fib(n-1,arr);
    }
    if(arr[n-2]==0)
    {
        arr[n-2]=fib(n-2,arr);
    }
    arr[n]=arr[n-1]+arr[n-2];
    return arr[n];
}
int fib(int n)
{
    int*arr=new int[n+1];
    for(int i=0;i<=n;i++)
    {
        arr[i]=0;
    }
    return fib(n,arr);
}
int main()
{
   int n;
   cin>>n;
   cout<<"fib of "<<n<<" is :"<<fib(n);

    return 0;
}