#include<bits/stdc++.h>
using namespace std;
void method(long long n)
{
	if(n>=10000000)
	{
		method(n/10000000);
		cout<<" kuti";
		n%=10000000;
	}
	if(n>=100000)
	{
		cout<<" "<<n/100000<<" lakh";
		n%=100000;
	}
	if(n>=1000)
	{
		cout<<" "<<n/1000<<" hajar";
		n%=1000;
	}
	if(n>=100)
	{
		cout<<" "<<n/100<<" shata";
		n%=100;
	}
	if(n>0)
	{
		cout<<" "<<n;
	}
}
int main()
{
	long long num;
	int index=1;
	while(cin>>num)
	{
		cout<<setw(4)<<index++<<".";
		if(num==0)
			cout<<" 0";
		else
			method(num);
		cout<<endl;
	}
}
