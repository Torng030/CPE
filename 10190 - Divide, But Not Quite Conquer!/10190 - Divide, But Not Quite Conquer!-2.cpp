#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        vector<int> v;
        v.push_back(m);
        bool bl=true;
        if(m==0||n==0||m==1||n==1)
            bl=false;
        else
        {
            while(m>1)
            {
                v.push_back(m/n);
                m/=n;
            }
            for(int i=0;i<v.size()-1;i++)
            {
                if(v[i]%n!=0)
                {
                    bl=false;
                    break;
                }
            }    
        }
        if(bl)
        {
            for(int i=0;i<v.size();i++)
            {
                if(i==0)
                    cout<<v[i];
                else
                    cout<<" "<<v[i];
            }
            cout<<endl;
        }
        else
            cout<<"Boring!"<<endl;
    }
}
