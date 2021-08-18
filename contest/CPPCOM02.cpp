#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll gcd(ll a, ll b){
	if(!a) return b;
	return gcd(b%a,a);
}

ll giamB(ll a, string b){
	ll mod = 0;
	for(int i = 0;i< b.length();i++){
		mod = (mod*10+b[i]-'0')%a;
	}
	return mod;
}
ll gcdchar(ll a, string b){
	ll num = giamB(a,b);
	return gcd(a,num);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a;
		cin >>a;
		string b;
		cin>>b;
		
		if(a==0){
			cout<<b<<endl;
		}
		else cout<<gcdchar(a,b)<<endl;
	}
	return 0;
}
