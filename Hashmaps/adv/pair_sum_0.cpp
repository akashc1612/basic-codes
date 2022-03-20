#include <iostream>
#include <unordered_map>
using namespace std;


int pairSum(int arr[],int n){
 unordered_map<int,int>a;
    int count=0;
   for(int i=0;i<n;i++)
   {
       if(a.find(-arr[i])!=a.end())
       {
           count=count+a[-arr[i]];
       }
       a[arr[i]]++;
   }
    return count;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}