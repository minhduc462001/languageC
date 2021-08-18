#include <bits/stdc++.h>
using namespace std;
long long Mod(string a, long long m){
	long long n = 0;
	for(long long i = 0;i<a.length();i++){
		n = (n*10+(long long)(a[i]-'0'));
		n = n%m;
	}
	return n;
}
long long powMod(string &a, long long b, long long m){
	long long res = Mod(a,m);
	long long mul = res;
	for(long long i = 1;i<b;i++){
		res = (res*mul)%m;
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		long long b,m;
		cin>>b>>m;
		cout<<powMod(a,b,m);
		
	}
	return 0;
}
