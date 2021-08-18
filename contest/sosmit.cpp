#include<bits/stdc++.h>
using namespace std;
// thuat toan sieve of Sundaram
bool snt(int n){
	if(n<2) return false;
	if(n==2||n==3) return true;
	for(int i = 2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
long long tongcacchuso(long long n){
	long long sum = 0;
	while(n>0){
		sum = n%10+sum;
		n/=10;
	}
	return sum;
}
long long tong(long long n){
	long long sum = 0;
	while(n%2==0){
		sum +=2;
		n/=2;
	}	
	for(long long i = 3;i<=sqrt(n);i+=2){
		while(n%i==0){
			sum = sum + tongcacchuso(i);
			n/=i;
		}
	}
	if(n>2){
		sum= sum+ tongcacchuso(n);
	}
	return sum;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		snt(100001);
		
		if(!snt(n)&&tong(n) == tongcacchuso(n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	return 0;
}
