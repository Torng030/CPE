#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int index=1;index<=n;index++)
	{
		long long x1,y1,x2,y2,count=0;
		cin>>x1>>y1>>x2>>y2;
		for(long long i=x1+y1+1;i<x2+y2+1;i++)
			count+=i;
		count+=x2-x1;
		cout<<"Case "<<index<<": "<<count<<endl;
	}
}
