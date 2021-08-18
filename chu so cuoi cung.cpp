#include<bits/stdc++.h>
using namespace std;

long long tongCacChuSo(long long n){
	long long tong = 0;
	while(n>0){
		tong = tong + n%10;
		n/=10;
	}
	
	return tong;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long tong = tongCacChuSo(n);
		while(tong > 9){
			tong = tongCacChuSo(tong);
		}
		cout<<tong<<endl;
	}
}
