#include <bits/stdc++.h>
using namespace std;
long long modPrimePow(int x,int y, long long p){
	long long res = 1;
	long long r = x%p;
	while(y>0){
		if(y & 1) res = (res*r)%p;
		r = (r*r)%p;
		y>>=1;
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y;
		long long p;
		cin>>x>>y>>p;
		cout<<(long long)modPrimePow(x,y,p)<<endl;
	}
	return 0;
	
}
