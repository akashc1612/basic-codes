#include <iostream>
#include<cstring>
using namespace std;

void removex(char arr[],char x)
{
    if(arr[0]=='\0')
    {
        return;
    }
   if(arr[0]!=x)
   {
       removex(arr+1,x);
   }
   else
   {
       for(int i=1;i<=strlen(arr);i++)
       {
           arr[i-1]=arr[i];
       }
       removex(arr,x);
   }
}
int main()
{
    char x,arr[10000];
    cin.getline(arr,10000);
    cin>>x;
    removex(arr,x);
    cout<<arr;
    return 0;
}
