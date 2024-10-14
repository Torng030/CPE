#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    while(cin>>n)
    {
        if(n%2==0)
            cout<<3*(n/2)<<endl;
        else
            cout<<3*(n/2)+1<<endl;
    }
}
