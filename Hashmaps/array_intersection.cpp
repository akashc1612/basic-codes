#include <iostream>
#include <algorithm>
#include<unordered_map>
using namespace std;

void intersection(int *arr1, int *arr2, int n, int m) 
{
    //Write your code here
    unordered_map<int,int>a;
    unordered_map<int,int>b;
    for(int i=0;i<n;i++)
    {
        a[arr1[i]]++;
    }
    vector<int>v;
    sort(arr2,arr2+m);
    for(int j=0;j<m;j++)
    {
        if(a.find(arr2[j])!=a.end())
        {
            auto it=a.find(arr2[j]);
            if(it->second>0)
            {
                cout<<arr2[j]<<' ';
                it->second--;
            }
        }
  
      }
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);
		
		delete[] input1;
		delete[] input2;
		
		cout << endl;
	}

	return 0;
}