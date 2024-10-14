#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int count=0;
        vector<int> v;
        v.push_back(n);
        if(n==0||m==0||n==1||m==1)
            count++;
        else
        {
            while(n>1)
            {
                if(n%m==0)
                {
                    v.push_back(n/m);
                    n/=m;
                }
                else
                {
                    count++;
                    break;
                }
            }
        }
        for(int i=0;i<v.size();i++)
        {
            if(count==0)
            {
                if(i==0)
                    cout<<v[i];
                else
                    cout<<" "<<v[i];
            }
            else
            {
                cout<<"Boring!";
                break;
            }
        }
        cout<<endl;
    }
}
