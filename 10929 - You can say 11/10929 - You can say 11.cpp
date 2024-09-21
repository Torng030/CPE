#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(cin>>s&&s!="0")
	{
		int sum[2];
		sum[0]=0;
		sum[1]=0;
		for(int i=0;i<s.size();i++)
		{
			sum[i%2]+=s[i]-'0';
		}
		if((sum[0]-sum[1])%11==0)
			cout<<s<<" is a multiple of 11."<<endl;
		else
			cout<<s<<" is not a multiple of 11."<<endl;
	}
}
