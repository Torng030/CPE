#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	vector<string> v;
	int mx=0;
	while(getline(cin,s))
	{
		v.push_back(s);
		mx=max(mx,int(s.size()));
	}
	for(int i=0;i<mx;i++)
	{
		for(int j=v.size()-1;j>=0;j--)
		{
			if(i<v[j].size())
				cout<<v[j][i];
			else
				cout<<" ";
		}
		cout<<endl;
	}
}
