#include<bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b){
//	while(a!=b){
//		if(a>b) a-=b;
//		else b-=a;
//	}
	long long gcd = __gcd(a,b);
	return (a*b)/gcd;
}
//int LCM(int a, int b){
//	return (a*b)/GCD(a,b);
//}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long tam = 1;
		for(long long i = 2;i<=n;i++){
			tam = GCD(tam,i);
		}

		cout<<tam<<endl;
	}
	return 0;
}
