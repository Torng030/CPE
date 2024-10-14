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
            string s=to_string(n);
            reverse(s.begin(),s.end());
            int a=stoi(s);
            for(int i=2;i<a;i++)
            {
                if(a%i==0)
                {
                    count++;
                    break;
                }
            }
            if(count==0&&a!=n)
                cout<<n<<" is emirp."<<endl;
            else
                cout<<n<<" is prime."<<endl;
        }
    }
}
