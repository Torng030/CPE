#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	int n;
	cin>>n;
	cin.ignore();
	while(n--)
	{
		string input;
		getline(cin,input);
		for(int i=0;i<input.size();i++)
		{
			if('A'<=input[i]&&input[i]<='Z')
				input[i]+=32;
			int index=s.find(input[i]);
			if(index!=-1)
				input[i]=s[index-2];
		}
		cout<<input<<endl;
	}
}
