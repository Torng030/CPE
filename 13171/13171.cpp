#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int m,y,c;
		string s;
		cin>>m>>y>>c>>s;
		//cout<<m<<y<<c<<s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='M')
				m--;
			else if(s[i]=='Y')
				y--;
			else if(s[i]=='C')
				c--;
			else if(s[i]=='R')
			{
				m--;
				y--;
			}
			else if(s[i]=='B')
			{
				m--;
				y--;
				c--;
			}
			else if(s[i]=='G')
			{
				y--;
				c--;
			}
			else if(s[i]=='V')
			{
				m--;
				c--;
			}
		}
		if(m>=0&&y>=0&&c>=0)
			cout<<"YES "<<m<<" "<<y<<" "<<c<<endl;
		else
			cout<<"NO"<<endl;
	}
}
