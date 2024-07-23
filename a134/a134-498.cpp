#include <bits/stdc++.h>
using namespace std;
int main(){
	//int fib[40];
	long long int fib[50];  //>40要用long long 會爆掉 
	int n,input;
	fib[0]=1;
	fib[1]=2;
	for(int i=2;i<50;i++){  //把費氏數列存陣列 
		fib[i]=fib[i-1]+fib[i-2];
	}
	cin>>n;  //n筆測資 
	while(n--){
		cin>>input;  //測資 
		cout<<input<<" = ";
		
		int index=0;
		for(int i=48;i>=0;i--){  //輸入減費式的值 
			if(input-fib[i]>=0){  //相減是正的就輸出1 
				cout<<"1";
				input-=fib[i]; 
				index=1;
			}
			else if(index==1){
				cout<<"0";
			}
		}
		cout<<" (fib)"<<endl;
	}
}
