#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(cin>>s&&s!="0")
	{
		int sum=0;
		while(s.size()!=1)
		{
			sum=0;
			for(int i=0;i<s.size();i++)
			{
				sum+=s[i]-'0';
			}
			s=to_string(sum);
		}
		cout<<s<<endl;
	}
}
