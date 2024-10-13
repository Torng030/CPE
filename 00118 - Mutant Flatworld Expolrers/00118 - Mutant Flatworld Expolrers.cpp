#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[51][51]={};
	char c[4]={'N','E','S','W'};
	map<char,int> mp;
	mp['N']=0;
	mp['E']=1;
	mp['S']=2;
	mp['W']=3;
	map<char,int> mpx;
	mpx['N']=0;
	mpx['E']=1;
	mpx['S']=0;
	mpx['W']=-1;
	map<char,int> mpy;
	mpy['N']=1;
	mpy['E']=0;
	mpy['S']=-1;
	mpy['W']=0;
	
	int n,m,x,y;
	char d;
	string s;
	cin>>n>>m;
	while(cin>>x>>y>>d>>s)
	{
		bool bl=true;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='F')
			{
				int nextx=x+mpx[d];
				int nexty=y+mpy[d];
				if(nextx>=0&&nexty>=0&&nextx<=n&&nexty<=m)
				{
					x=nextx;
					y=nexty;
				}
				else
				{
					if(a[x][y]==1)
						continue;
					else
					{
						cout<<x<<" "<<y<<" "<<d<<" LOST"<<endl;
						a[x][y]=1;
						bl=false;
						break;
					}
				}
			}
			else if(s[i]=='R')
				d=c[(mp[d]+1)%4];
			else
				d=c[(mp[d]+3)%4];
		}
		if(bl)
			cout<<x<<" "<<y<<" "<<d<<endl;
	}
	
}
