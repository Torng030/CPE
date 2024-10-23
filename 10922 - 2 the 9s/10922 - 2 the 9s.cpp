#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s&&s!="0")
    {
        cout<<s;
        int sum=0,count=0;
        while(sum!=9)
        {
            sum=0;
            for(int i=0;i<s.size();i++)
                sum+=s[i]-'0';
            s=to_string(sum);
            if(sum%9==0)
                count++;
            else
                break;
        }
        if(count==0)
            cout<<" is not a multiple of 9."<<endl;
        else
            cout<<" is a multiple of 9 and has 9-degree "<<count<<"."<<endl;
    }
}
