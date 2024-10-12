#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin.ignore();
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        if(i!=0)
            cout<<endl;
        double count=0;
        map<string,int> mp;
        while(getline(cin,s)&&s!="")
        {
            mp[s]++;
            count++;
        }
        for(auto &p:mp)
            cout<<p.first<<" "<<fixed<<setprecision(4)<<(p.second/count)*100<<endl;
    }
}
