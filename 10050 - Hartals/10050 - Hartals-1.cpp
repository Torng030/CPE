#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d,p;
        cin>>d>>p;
        int r[p];
        for(int j=0;j<p;j++)
            cin>>r[j];
        //-----cin data-----
        int w[d+1]={0},ans=0;
        for(int j=1;j<=d;j++)
        {
            for(int k=0;k<p;k++)
            {
                if(j%r[k]==0)
                {
                    w[j]=1;
                }
            }
        }
        for(int j=1;j<=d;j++)
        {
            if(j%7==6||j%7==0)
                w[j]=0;
        }
        for(int j=1;j<=d;j++)
        {
            ans+=w[j];
        }
        cout<<ans<<endl;
    }
}
