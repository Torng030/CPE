#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a="234567890-=ertyuiop[]\\dfghjkl;'cvbnm,./";
	string b="`1234567890qwertyuiop[asdfghjklzxcvbnm,";
	string s;
	while(getline(cin,s))
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==' ')
			{
				cout<<" ";
				continue;
			}
			for(int j=0;j<a.size();j++)
			{
				if(tolower(s[i])==a[j])
					cout<<b[j];
			}
		}
		cout<<endl;
	}
}
