#include <iostream>
using namespace std;

long  staircase(long * arr, int n)
 {
     if(n==1 or n==2)
     {
         return arr[n]=n;
     }
     if(n==3)
     {
         return arr[n]=4;
     }
     if(arr[n-1]==0)
     {
         arr[n-1]= staircase(arr,n-1);
     }
     if(arr[n-2]==0)
     {
         arr[n-2]= staircase(arr,n-2);
     }
     if(arr[n-3]==0)
     {
         arr[n-3]= staircase(arr,n-3);
     }
     return arr[n]=arr[n-1]+arr[n-2]+arr[n-3];
 }
long staircase(int n)
{
	//Write your code here
    
long *arr=new long[n+1];
    for(int i=0;i<=n;i++)
    {
        arr[i]=0;
    }
    return staircase(arr,n);
}

int main()
{
	int n;
	cin >> n;
	cout << staircase(n);
}