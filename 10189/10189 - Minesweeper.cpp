#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,index=1;
	char a[100][100]={0};
	while(cin>>m>>n&&(m!=0&&n!=0))
	{
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		}
		
		int b[100][100]={0};
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i][j]=='*')
				{
					for(int k=i-1;k<=i+1;k++)
					{
						for(int l=j-1;l<=j+1;l++)
						{
							if(k==-1||k==m||l==-1||l==n)
								continue;
							else
								b[k][l]+=1;
						}
					}
					
				}
			}
		}
		if(index>1)
			cout<<endl;
		cout<<"Field #"<<index<<":"<<endl;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i][j]=='*')
					cout<<"*";
				else
					cout<<b[i][j];
			}
			cout<<endl;
		}
		index++;
	}
}
