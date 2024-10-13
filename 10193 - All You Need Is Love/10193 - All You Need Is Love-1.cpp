#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int index=1;index<=n;index++)
	{
		cout<<"Pair #"<<index<<": ";
		int a=0,b=0,id1=0,id2=0;
		string s1,s2;
		cin>>s1>>s2;
		for(int i=s1.size()-1;i>=0;i--)
		{
			a+=(s1[id1]-'0')*pow(2,i);
			id1++;
		}
		for(int i=s2.size()-1;i>=0;i--)
		{
			b+=(s2[id2]-'0')*pow(2,i);
			id2++;
		}
		
		int gcd=__gcd(a,b);
		if(gcd<=1)
			cout<<"Love is not all you need!"<<endl;
		else
			cout<<"All you need is love!"<<endl;
	}
}
