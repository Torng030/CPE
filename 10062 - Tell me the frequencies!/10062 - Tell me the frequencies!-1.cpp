#include<bits/stdc++.h>
using namespace std;
bool test(pair<char,int> a,pair<char,int> b)
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
		map<char,int> mp;
		if(n!=0)
			cout<<endl;
		for(int i=0;i<s.size();i++)
			mp[s[i]]++;
		/*for(auto q:mp)
			cout<<q.first<<" "<<q.second<<endl;*/
		vector<pair<char,int>> v;
		for(auto q:mp)
			v.push_back({q.first,q.second});
		sort(v.begin(),v.end(),test);
		for(auto  a:v)
			cout<<(int)a.first<<" "<<a.second<<endl;
		n++;
	}
}
