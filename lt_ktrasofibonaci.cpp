#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n==0){
			cout<<"YES"<<endl;
			continue;
		}
		long long f1 = 0;
		long long f2 = 1;
		long long fn = 1;
		while(fn<n){
			fn = f1+f2;
			f1 = f2;
			f2 = fn;
		}
		if(fn==n){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}

