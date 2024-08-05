#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<char,vector<int>> mp;
//			{1,2,3,4,5,6,7,8,9,10}
	mp['c']={0,1,1,1,0,0,1,1,1,1};
	mp['d']={0,1,1,1,0,0,1,1,1,0};
	mp['e']={0,1,1,1,0,0,1,1,0,0};
	mp['f']={0,1,1,1,0,0,1,0,0,0};
	mp['g']={0,1,1,1,0,0,0,0,0,0};
	mp['a']={0,1,1,0,0,0,0,0,0,0};
	mp['b']={0,1,0,0,0,0,0,0,0,0};
	mp['C']={0,0,1,0,0,0,0,0,0,0};
	mp['D']={1,1,1,1,0,0,1,1,1,0};
	mp['E']={1,1,1,1,0,0,1,1,0,0};
	mp['F']={1,1,1,1,0,0,1,0,0,0};
	mp['G']={1,1,1,1,0,0,0,0,0,0};
	mp['A']={1,1,1,0,0,0,0,0,0,0};
	mp['B']={1,1,0,0,0,0,0,0,0,0};
	
	int n;
	string s;
	cin>>n;
	cin.ignore();
	while(n--)
	{
		getline(cin,s);
		int fing[10]={};
		int bl[10]={};
		for(int i=0;i<s.size();i++)
		{
			for(int j=0;j<10;j++)
			{
				if(mp[s[i]][j])
				{
					if(bl[j]==1)
						continue;
					else
					{
						bl[j]=1;
						fing[j]++;
					}
				}
				else
					bl[j]=0;
			}
		}
		for(int i=0;i<10;i++)
		{
			if(i==0)
				cout<<fing[i];
			else
				cout<<" "<<fing[i];
		}
		cout<<endl;
	}
}
