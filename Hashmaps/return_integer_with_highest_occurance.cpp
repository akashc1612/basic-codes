#include <iostream>
#include<unordered_map>
using namespace std;
int highestFrequency(int arr[], int n) {
    // Write your code here
    if(n==1)
    {
        return arr[0];
    }
    unordered_map<int,int>mymap;
    for(int i=0;i<n;i++)
    {
        if(mymap.count(arr[i])>0)
        {
            mymap[arr[i]]++;
            continue;
        }
        mymap[arr[i]]=1;
    }
    int max=arr[0];
    int max_count=mymap[arr[0]];
    for(int i=0;i<n;i++)
    {
        if(mymap[arr[i]]>max_count)
        {
            max_count=mymap[arr[i]];
            max=arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}