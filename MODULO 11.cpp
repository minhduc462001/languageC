#include <bits/stdc++.h>
using namespace std;
long long mulMod(long long a, long long b, long long m){
	if(b==0) return 0;
	long long tam = mulMod(a,b/2,m);
	if(b%2 == 0) return (2*(tam%m))%m;
	return (a%m+2*(tam%m))%m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long m = 10e9+7;
		cout<<mulMod(a,b,m)<<endl;
		
	}
	return 0;
}

