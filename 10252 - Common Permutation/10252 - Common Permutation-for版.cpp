#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	while(getline(cin,s1))
	{
		getline(cin,s2);
		for(int i=int('a');i<=int('z');i++)
		{
			for(int j=0;j<s1.size();j++)
			{
				bool bl=false;
				for(int k=0;k<s2.size();k++)
				{
					if(i==s1[j]&&i==s2[k])
					{
						cout<<s2[k];
						s2.erase(k,1);
						bl=true;
					}
					if(bl)
						break;
				}
			}
		}
		cout<<endl;
	}
}
