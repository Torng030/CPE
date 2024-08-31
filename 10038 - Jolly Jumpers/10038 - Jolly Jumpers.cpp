#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,num;
    while(cin>>n)
    {
        vector<int> v,v1,v2;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            v.push_back(num);
        }
        int d=0,tmp=0;
        bool bl=true;
        for(int i=0;i<v.size()-1;i++)
        {
            d=abs(v[i]-v[i+1]);
            if(d>n-1)
                bl=false;
            v1.push_back(d);
        }
        sort(v1.begin(),v1.end());
        if(n!=1)
        {
            for(int i=0;i<v1.size()-1;i++)
            {
                if(v[i]==v[i+1])
                    bl=false;
                tmp=abs(v1[i]-v1[i+1]);
                if(tmp!=1)
                {
                    bl=false;
                    break;
                }
            }
        }
        if(tmp==0&&d==0)
            bl=false;
        if(bl||n==1)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
    }
}
