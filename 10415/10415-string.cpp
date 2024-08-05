#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<char,string> mp;
	mp['c']="0111001111";
	mp['d']="0111001110";
	mp['e']="0111001100";
	mp['f']="0111001000";
	mp['g']="0111000000";
	mp['a']="0110000000";
	mp['b']="0100000000";
	mp['C']="0010000000";
	mp['D']="1111001110";
	mp['E']="1111001100";
	mp['F']="1111001000";
	mp['G']="1111000000";
	mp['A']="1110000000";
	mp['B']="1100000000";
	
	int n;
	string s;
	cin>>n;
	cin.ignore();
	while(n--)
	{
		//輸入樂譜 
		int fin[10]={0};
		string tmp;
		getline(cin,s);
		
		//存第一個字元之手指狀態&統計按下次數 
		tmp=mp[s[0]];
		for(int i=0;i<10;i++)
		{
			if(tmp[i]=='1')
				fin[i]++;
		}
		
		//比對現在音符狀態與前一音符狀態是否相同 
		for(int i=1;i<s.size();i++)
		{
			string s1=mp[s[i]];
			for(int j=0;j<tmp.size();j++)
			{
				if(tmp[j]=='0'&&s1[j]=='1')
					fin[j]++;
			}
			tmp=mp[s[i]];
		}
		for(int i=0;i<10;i++)
		{
			if(i==0)
				cout<<fin[i];
			else
				cout<<" "<<fin[i];
		}
		cout<<endl;
	}
}
