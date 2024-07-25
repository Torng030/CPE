#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		bool b=true;
		vector<int> v;
		if(n==0||m==0||n==1||m==1)
			b=false;
		else
		{
			v.push_back(n);
			while(n>1)
			{
				if(n%m==0)
				{
					n/=m;
					v.push_back(n);
				}
				else
				{
					b=false;
					break;
				}
			}
		}
		if(!b)
			cout<<"Boring!"<<endl;
		else
		{
			for(int i=0;i<=v.size()-1;i++)
			{
				if(i==v.size()-1)
				{
					cout<<v[i];
					break;
				}
				cout<<v[i]<<" ";
			}
			cout<<endl;
		}
	}
}
