#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
        int count=0;
        vector<int> v;
        while(n>=1)
        {
            v.push_back(n%2);
            n/=2;
        }
        cout<<"The parity of ";
        for(int i=v.size()-1;i>=0;i--)
        {
            cout<<v[i];
            if(v[i]==1)
                count++;
            
        }
        cout<<" is "<<count<<" (mod 2)."<<endl;
    }
}
