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
        string tmp;
        int fin[10]={};
        getline(cin,s);
        tmp=mp[s[0]]; //begin
        for(int i=0;i<10;i++)
        {
            if(tmp[i]=='1')
                fin[i]++;
        }
        for(int i=1;i<s.size();i++)
        {
            string s1=mp[s[i]];
            for(int j=0;j<10;j++)
            {
                if(s1[j]=='1'&&tmp[j]=='0')
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
