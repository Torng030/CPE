#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int index=1;index<=n;index++)
	{
		long long x,y,t,f1,f2;
		cin>>x>>y;
		if(x==0&&y==0)
			f1=0;
		else
		{
			t=x+y-1;
			f1=(t*t+3*t)/2+(x+1);
		}
		cin>>x>>y;
		t=x+y-1;
		if(x==0&&y==0)
			f2=0;
		else
		{
			t=x+y-1;
			f2=(t*t+3*t)/2+(x+1);
		}
		cout<<"Case "<<index<<": ";
		cout<<f2-f1<<endl;
	}
}
