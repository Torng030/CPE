#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,num;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			cin>>num;
			v.push_back(num);
		}
		int count=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(v[j]>v[j+1])
				{
					swap(v[j],v[j+1]);
					count++;
				}
			}	
		}
		cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
	}
}