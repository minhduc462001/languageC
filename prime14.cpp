#include <bits/stdc++.h>
using namespace std;

bool snt(int n){
	if(n==2||n==3) return true;
	else
	for(int i = 2;i<=sqrt(n);i++)
		if(n%i==0)		
			return false;
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n<4) continue;
		for(long long i = 2;i<=sqrt(n);i++){
			if(snt(i)&&(i*i)<=n){
				cout<<i*i<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
