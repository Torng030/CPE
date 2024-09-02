#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s1,s2;
    map<string,int> mp;
    cin>>n;
    while(n--)
    {
        cin>>s1;
        mp[s1]++;
        getline(cin,s2);
        //cout<<"s2:"<<s2<<endl;
    }
    for(auto q:mp)
        cout<<q.first<<" "<<q.second<<endl;
}
