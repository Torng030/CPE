#include<bits/stdc++.h>
using namespace std;
int main()
{
	char c;
	int count[100]={0},tmp=0;
	while(cin>>c)
	{
		if(toupper(c)>='A'&&toupper(c)<='Z')
		{
			count[toupper(c)]++;
			tmp++;
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
