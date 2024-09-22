#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s1,s2;
	map<string,int> mp;
	for(int i=0;i<n;i++)
	{
		cin>>s1;
		mp[s1]++;
		getline(cin,s2);
	}
	for(auto &q:mp)
		cout<<q.first<<" "<<q.second<<endl;
}
