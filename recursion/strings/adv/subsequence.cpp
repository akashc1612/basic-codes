vector<string> subsequences(string str, vector<string>&v)
{
    if(str.size()==0)
    {
        v.push_back("");
        return v;
    }
    string s=str.substr(1);
    vector<string>ans=subsequences(s,v);
    for(int i=0;i<ans.size();i++)
    {
        v.push_back(str[0]+ans[i]);
    }
    return v;
}
vector<string> subsequences(string str){
	
	// Write your code here
  vector<string>v;
    return subsequences(str,v);
}
