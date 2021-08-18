#include<bits/stdc++.h>
using namespace std;

long long bcnn(long long x,long long y){
	int gcd = __gcd(x,y);
	return x*y/gcd;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
		long long k = bcnn(x,y);
		long long k1 = bcnn(k,z);
		long long i = 2;
		double du = (double)(pow(10,n-1)/k1);
		long long du1 = pow(10,n-1)/k1;

//		while(k1*i<=pow(10,n)-1){
//			if(k1*i>= pow(10,n-1)){
//				breakWhile = true;
//				cout<<k1*i<<endl;
//				break;
//			}
//			i++;
//		}
		if(du>du1) du1+=1;
		if(k1*du1>pow(10,n)-1) cout<<-1<<endl;
		else cout<<k1*du1<<endl;
	}
	return 0;
}
