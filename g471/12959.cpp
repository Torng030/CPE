#include <bits/stdc++.h>
using namespace std;
int main()
{
	int j,r,p;
	while(cin>>j>>r&&j!=0&&r!=0)
	{
		int sum[j]={};
		for(int i=0;i<j*r;i++)
		{
			cin>>p;
			sum[i%j]+=p;
		}
		int tmp=0;
		for(int i=0;i<j;i++)
			tmp=max(tmp,sum[i]);
		for(int i=j-1;i>=0;i--)
		{
			if(sum[i]==tmp)
			{
				cout<<i+1<<endl;
				break;
			}
		}
	}
}
