#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		//1 1 2 3 5 8
		if(n==1||n==2||n==3){
			cout<<"YES"<<endl;
			continue;
		}
		long long a2= 2;
		long long a3 = 1+a2;
		long long an = a3+a2;
		
		while(an<n){
			a2 = a3;
			a3 = an;
			an = a2+a3;
		}
		if(an==n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
