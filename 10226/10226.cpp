#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>n;
	cin.ignore();
	cin.ignore();
	while(n--)
	{
		int sum=0;
		map<string,double> mp;
		while(getline(cin,s))
		{
			if(s.size()==0)
				break;
			mp[s]++;
			sum++;
		}
		for(auto q:mp)
		{
			cout<<fixed<<setprecision(4)<<q.first<<" "<<q.second/sum*100<<endl;
		}
		if(n!=0)
			cout<<endl;
	}
}
