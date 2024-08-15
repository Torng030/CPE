#include <bits/stdc++.h>
using namespace std;
int main()
{
	int count=0;
	string s;
	while(getline(cin,s))
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='"')
			{
				if(count%2==0)
					cout<<"``";
				else if(count%2==1)
					cout<<"''";
				count++;
				//cout<<count<<endl;
			}
			else
				cout<<s[i];
		}
		cout<<endl;
	}
}
