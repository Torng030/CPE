#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		double n,p,i;
		cin>>n>>p>>i;
		double q=1-p;
		
		if(p==0)
			cout<<"0.0000"<<endl;
		else
			cout<<fixed<<setprecision(4)<<(pow(q,i-1)*p)/(1-pow(q,n))<<endl;
	}
}
