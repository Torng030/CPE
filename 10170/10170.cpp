#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long s,d;
    while(cin>>s>>d)
    {
        long long sum=s;
        while(sum<d)
        {
            s++;
            sum+=s;
        }
        cout<<s<<endl;
    }
}
