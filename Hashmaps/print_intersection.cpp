#include <iostream>
#include <algorithm>
#include<map>
#include<algorithm>
using namespace std;
void intersection(int *arr1, int *arr2, int n, int m) 
{
    //Write your code here
     map<int,int>mymap;
    for(int i=0;i<n;i++)
    {
        mymap[arr1[i]]++;
    }
   for(int i=0;i<m;i++)
   {
       if(mymap[arr2[i]]>0)
       {
           mymap[arr2[i]]--;
           cout<<arr2[i]<<' ';
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