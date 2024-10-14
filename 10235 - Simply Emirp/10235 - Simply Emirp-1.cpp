#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int count=0;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                count++;
                cout<<n<<" is not prime."<<endl;
                break;
            }
        }
        if(count==0)
        {
            int a=n,b=0;
            while(a>=1)
            {
                b=b*10+a%10;
                a/=10;
            }
            for(int i=2;i<b;i++)
            {
                if(b%i==0)
                {
                    count++;
                    break;
                }
            }
            if(count==0&&b!=n)
                cout<<n<<" is emirp."<<endl;
            else
                cout<<n<<" is prime."<<endl;
        }
    }
}
