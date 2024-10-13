#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int index=1;index<=n;index++)
    {
        cout<<"Pair #"<<index;
        int a=0,b=0;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<s1.size();i++)
            a+=(s1[i]-'0')*pow(2,(s1.size()-1-i));
        for(int i=0;i<s2.size();i++)
            b+=(s2[i]-'0')*pow(2,(s2.size()-1-i));
        if(__gcd(a,b)<=1)
            cout<<": Love is not all you need!"<<endl;
        else
            cout<<": All you need is love!"<<endl;
    }
}
