#include <iostream>
#include <string>
#include<unordered_map>
using namespace std;
string uniqueChar(string str) {
int i=0,count=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    unordered_map<char,int>m;
    int j=0;
    for(int i=0;i<count;i++)
    {
        if(m[str[i]]==0)
        {
           str[j++]=str[i];
            m[str[i]]++;
        }
    }
    str.resize(j);
    return str;
}

int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}