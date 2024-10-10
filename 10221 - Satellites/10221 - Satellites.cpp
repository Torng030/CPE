#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main()
{
	double s,a;
	string s1;
	while(cin>>s>>a>>s1)
	{
		if(s1=="min")
			a/=60;
		if(a>180)
			a=360-a;
		double ans=2*pi*(6440+s)*a/360;
		double ans1=2*(6440+s)*sin(a*pi/180/2);
		cout<<fixed<<setprecision(6)<<ans<<" ";
		cout<<fixed<<setprecision(6)<<ans1<<endl;
	}
}
