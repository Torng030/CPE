#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	while(cin>>i>>j)
	{
		cout<<i<<" "<<j<<" ";
		int mx=0;
		if(i>j)
			swap(i,j);
		for(int k=i;k<=j;k++)
		{
			int n=k,count=1;
			while(n!=1)
			{
				if(n%2!=0)
					n=3*n+1;
				else
					n/=2;
				count++;
			}
			if(count>mx)
				mx=count;
		}
		cout<<mx<<endl;
	}
}
