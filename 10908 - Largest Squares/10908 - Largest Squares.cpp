#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,q;
        cin>>m>>n>>q;
        char a[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        }
        cout<<m<<" "<<n<<" "<<q<<endl;
        int r,c;
        for(int i=0;i<q;i++)
        {
            cin>>r>>c;
            bool bl=true;
            int t1=r-1,t2=c-1,count=1;
            while(true)
            {
                for(int i=t1;i<t1+count+2;i++)
                {
                    for(int j=t2;j<t2+count+2;j++)
                    {
                        if(a[r][c]!=a[i][j]||!(i>=0&&i<m&&j>=0&&j<n))
                        {
                            bl=false;
                            break;
                        }
                    }
                    if(bl==false)
                        break;
                }
                if(bl==false)
                    break;
                count+=2;
                t1--;
                t2--;
            }
            cout<<count<<endl;
        }
    }
}
