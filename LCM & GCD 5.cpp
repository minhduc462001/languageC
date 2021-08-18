#include<bits/stdc++.h>
using namespace std;
long long GCD(long long x, long long y){
	return __gcd(x,y);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long a, x, y;
		cin>>a>>x>>y;
		long long lap = GCD(x,y);
		for(int i=1;i<=lap;i++){
			cout<<a;
		}
		cout<<endl;
	}
	return 0;
}
