#include<bits/stdc++.h>
using namespace std;
bool tool(pair<char,int> a,pair<char,int> b)
{
	if(a.second==b.second)
		return a.first>b.first;
	else
		return a.second<b.second;
}
int main()
{
	int n=0;
	string s;
	while(getline(cin,s))
	{
		if(n!=0)
			cout<<endl;
		n++;
		map<char,int> mp;
		for(int i=0;i<s.size();i++)
			mp[s[i]]++;
		vector<pair<char,int>> v;
		for(auto &p:mp)
			v.push_back({p.first,p.second});
		sort(v.begin(),v.end(),tool);
		for(auto &q:v)
			cout<<int(q.first)<<" "<<q.second<<endl;
	}
}
