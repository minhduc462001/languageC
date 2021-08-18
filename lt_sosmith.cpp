#include<bits/stdc++.h>
using namespace std;
long long sum_n(long long n){
	long long so = 0;
	while(n>0){
		so = so + n%10;
		n/=10;
	}
	return so;
}
long long sum_u(long long n){
	long long so = 0;
	while(n%2==0){
		so+=2;
		n/=2;
	}
	for(long long i = 3;i<=sqrt(n);i+=2){
		while(n%i==0){
			so = so + sum_n(i);
			n/=i;
		}
	}
	if(n>2){
		so+=sum_n(n);
	}
	return so;
}
int main(){
	int n;
	cin>>n;
	if(sum_n(n)==sum_u(n)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}

