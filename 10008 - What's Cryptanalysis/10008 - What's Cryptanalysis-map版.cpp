#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);
        for(int j=0;j<s.size();j++)
        {
            if(toupper(s[j])>='A'&&toupper(s[j])<='Z')
                mp[toupper(s[j])]++;
        }
    }
    int mx=0,a[100]={0};
    for(auto &q:mp)
    {
        a[q.first]=q.second;
        mx=max(mx,q.second);
        //cout<<q.first<<" "<<q.second<<endl;
    }
    for(int i=mx;i>0;i--)
    {
        for(int j=0;j<100;j++)
        {
            if(a[j]==i)
                cout<<char(j)<<" "<<i<<endl;
        }
    }
}
