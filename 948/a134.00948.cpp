#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a[40];
	a[0]=1;
	a[1]=2;
	for(int i=2;i<40;i++){  //建立費波那係數陣列 
		a[i]=a[i-1]+a[i-2]; //規則:數值=前兩項的值相加  
	}
	int n;
	cin>>n;  //n筆測資 
	for(int j=0;j<n;j++){
		int num,index=0;
		cin>>num;
		cout<<num<<" = "; 
		for(int k=39;k>=0;k--){  //從最後面的值開始比對 
			if(num>=a[k]){
				num-=a[k];  //num>值才可以相減
				cout<<"1";
				index++;
			}
			else{
				if(index!=0){  //如果輸出過1後 無法相減就要輸出0 
					cout<<"0";
				}
				else{
					continue;
				}
			}
		}
		cout<<" (fib)"<<endl;
	}
} 
