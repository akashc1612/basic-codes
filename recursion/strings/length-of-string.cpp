#include <iostream>
using namespace std;
int rec(char arr[])
{
    if(arr[0]=='\0')
    {
        return 0;
    }
    int smalloutput=rec(arr+1);
    return smalloutput+1;
}
int main()
{
   char arr[1000];
   cin.getline(arr,1000);
    cout<<rec(arr);
    return 0;
}
