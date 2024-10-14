#include<bits/stdc++.h>
using namespace std;
int n,m;
bool tool(int a,int b)
{
    if(a%m!=b%m)
        return a%m<b%m;
    else
    {
        if(abs(a%2)!=abs(b%2))
            return abs(a%2)>abs(b%2);
        else
        {
            if(a%2==0)
                return a<b;
            else
                return a>b;        
        }
    }
}
int main()
{
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
        {
            cout<<n<<" "<<m<<endl;
            break;
        }
        cout<<n<<" "<<m<<endl;
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        sort(v.begin(),v.end(),tool);
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<endl;
    }
}
