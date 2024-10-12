#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,index=1;
    while(cin>>m>>n&&m!=0&&n!=0)
    {
        if(index!=1)
            cout<<endl;
        cout<<"Field #"<<index++<<":"<<endl;
        char a[m][n]={};
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]=='*')
                    cout<<"*";
                else
                {
                    int count=0;
                    for(int k=i-1;k<=i+1;k++)
                    {
                        for(int l=j-1;l<=j+1;l++)
                        {
                            if(k==-1||l==-1||k==m||l==n)
                                continue;
                            if(a[k][l]=='*')
                                count++;
                        }
                    }
                    cout<<count;
                }
            }
            cout<<endl;
        }
    }
}
