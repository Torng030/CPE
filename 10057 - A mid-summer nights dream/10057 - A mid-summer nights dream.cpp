#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num;
	while(cin>>n)
	{
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			cin>>num;
			v.push_back(num);
		}
		sort(v.begin(),v.end());
		int a1=0,a2=0,a3=1;
		if(n%2==1)
		{
			a1=v[n/2];
			for(int i=0;i<v.size();i++)
			{
				if(v[i]==a1)
					a2++;
			}
		}
		else
		{
			int tmp=v[n/2];
			a1=v[n/2-1];
			for(int i=0;i<v.size();i++)
			{
				if(v[i]==tmp||v[i]==a1)
					a2++;
			}
			if(tmp>a1)
				a3=tmp-a1+1;
		}
		cout<<a1<<" "<<a2<<" "<<a3<<endl;
	}
}
