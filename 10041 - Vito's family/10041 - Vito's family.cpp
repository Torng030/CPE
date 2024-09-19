#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num,add;
		cin>>num;
		vector<int> v; 
		for(int i=0;i<num;i++)
		{
			cin>>add;
			v.push_back(add);
		}
		sort(v.begin(),v.end());
		int distance=0,mid=v.size()/2;
		for(int i=0;i<num;i++)
			distance+=abs(v[i]-v[mid]);
		cout<<distance<<endl;
	}
}
