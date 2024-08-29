#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        vector<int> v;
        for(int i=0;i<s1.size();i++)
        {
            for(int j=0;j<s2.size();j++)
            {
                if(s1[i]==s2[j])
                {
                    v.push_back(s1[i]);
                    s2.erase(j,1);
                    break;
                }
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==' ')
                continue;
            else
                cout<<char(v[i]);
        }
        cout<<endl;
    }
}
