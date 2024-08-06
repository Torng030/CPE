#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b&&a!=0&&b!=0)
	{
		int n,count=0;
		double sq;
		for(int i=a;i<=b;i++)
		{
			sq=sqrt(i);
			n=sq;
			if(n==sq)
				count++;
		}
		cout<<count<<endl;
	}
}
