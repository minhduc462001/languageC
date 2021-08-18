#include<bits/stdc++.h>
using namespace std;

unsigned long long giaithua(unsigned long long n){
	unsigned long long gt=1;
	if(n == 1||n== 2) return n;
	if(n>2)
	for(unsigned long long i = 2;i<=n;i++){
		gt = gt*i;
	}
	return gt;
}

int main(){
	unsigned long long n;
	int k;
	cin>>n>>k;
	unsigned long long mu = pow(2,k); 
	cout<<giaithua(n)<;
	if(giaithua(n) % mu == 0) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
