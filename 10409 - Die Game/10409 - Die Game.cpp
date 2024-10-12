#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    while(cin>>n&&n!=0)
    {
        int die[3][4]={};
        die[1][1]=1;
        die[0][1]=2;
        die[1][0]=3;
        die[1][2]=4;
        die[2][1]=5;
        die[1][3]=6;
        while(n--)
        {
            cin>>s;
            int tmp;
            if(s=="east")
            {
                tmp=die[1][1]; //1
                die[1][1]=die[1][0];
                die[1][0]=die[1][3];
                die[1][3]=die[1][2];
                die[1][2]=tmp;
            }
            else if(s=="west")
            {
                tmp=die[1][1]; //1
                die[1][1]=die[1][2];
                die[1][2]=die[1][3];
                die[1][3]=die[1][0];
                die[1][0]=tmp;
            }
            else if(s=="south")
            {
                tmp=die[1][1]; //1
                die[1][1]=die[0][1];
                die[0][1]=die[1][3];
                die[1][3]=die[2][1];
                die[2][1]=tmp;
            }
            else if(s=="north")
            {
                tmp=die[1][1]; //1
                die[1][1]=die[2][1];
                die[2][1]=die[1][3];
                die[1][3]=die[0][1];
                die[0][1]=tmp;
            }
        }
        cout<<die[1][1]<<endl;
    }
}
