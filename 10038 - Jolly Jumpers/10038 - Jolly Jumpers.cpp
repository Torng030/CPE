#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[n];
		vector<int> v;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n-1;i++)
			v.push_back(abs(a[i+1]-a[i]));
		sort(v.begin(),v.end());
		
		bool bl=true;
		for(int i=0;i<n-1;i++)
		{
			if(i+1!=v[i])
				bl=false;
		}
		if(bl)
			cout<<"Jolly"<<endl;
		else
			cout<<"Not jolly"<<endl;
	}
}
