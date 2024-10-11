#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,num;
	while(cin>>t)
	{
		while(cin>>n)
		{
			vector<int> v;
			for(int i=0;i<n;i++)
			{
				cin>>num;
				v.push_back(num);
			}
			int count=0;
			for(int i=0;i<n;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(v[i]>v[j])
					{
						swap(v[i],v[j]);
						count++;
					}
				}	
			}
			cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
		}
	}
}
