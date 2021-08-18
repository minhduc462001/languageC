#include <bits/stdc++.h>
using namespace std;

bool snt(long long n){
	if(n==2||n==3) return true;
	else
	for(long long i = 2;i<=sqrt(n);i++)
		if(n%i==0)		
			return false;
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		unsigned long long n;
		cin>>n;
		if(n<4) {
			cout<<0<<endl;
			continue;
		}
		int dem = 0;
		for(unsigned long long i = 2;i<=sqrt(n);i++){
			if(snt(i)){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
