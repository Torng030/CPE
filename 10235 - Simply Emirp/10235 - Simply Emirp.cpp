#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        cout<<n;
        bool bl=true;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                bl=false;
                cout<<" is not prime."<<"\n";
                break;
            }
        }
        if(bl)
        {
            int n1=n,n2=0;
            while(n1>=1)
            {
                n2=n2*10+n1%10;
                n1/=10;
            }
            for(int i=2;i<n2;i++)
            {
                if(n2%i==0)
                {
                    bl=false;
                    break;
                }
            }
            if(bl&&n2!=n)
                cout<<" is emirp."<<"\n";
            else
                cout<<" is prime."<<"\n";
        }
    }
}