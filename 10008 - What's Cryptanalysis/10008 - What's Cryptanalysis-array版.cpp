#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	int count[100]={0},tmp=0;
	for(int i=0;i<n;i++)
	{
		string s;
		getline(cin,s);
		for(int j=0;j<s.size();j++)
		{
			if(toupper(s[j])>='A'&&toupper(s[j])<='Z')
			{
				count[toupper(s[j])]++;
				tmp++;
			}
		}
	}
	while(tmp--)
	{
		for(int i=int('A');i<=int('Z');i++)
		{
			if(tmp==0)
				break;
			if(count[i]==tmp)
				cout<<char(i)<<" "<<tmp<<endl;
		}
	}
}
