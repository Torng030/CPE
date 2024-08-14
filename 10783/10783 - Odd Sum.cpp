#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int c=1;c<=n;c++)
	{
		int a,b,sum=0;
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
			if(i%2==1)
				sum+=i;
		}
		cout<<"Case "<<c<<": "<<sum<<endl;
	}
}
