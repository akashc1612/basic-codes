#include <iostream>
#include<unordered_map>
using namespace std;

int getPairsWithDifferenceK(int *arr, int n, int k) {
    // Write your code here
    unordered_map<int,int>m;
    int count=0;
    for(int i=0;i<n;i++)
    {
        int find1=arr[i]+k;
        int find2=arr[i]-k;
        if(find1!=find2){
           if(m.find(find1)!=m.end())
            {
            count=count+m[find1];
            }
           if(m.find(find2)!=m.end())
            {
            count=count+m[find2];
            }
        }
        else{
             if(m.find(find1)!=m.end())
             {
            count=count+m[find1];
             }
        }
        m[arr[i]]++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    cout << getPairsWithDifferenceK(input, n, k);

    delete[] input;
}