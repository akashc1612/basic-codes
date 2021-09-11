#include <iostream>
#include<cstring>
using namespace std;
void print(int arr[][100],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
}
int main()
{
   int arr[100][100];
   int m,n;
   cin>>m>>n; //m->rows n->columns
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>arr[i][j];
       }
   }
   print(arr,m,n);
    return 0;
}
