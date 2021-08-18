#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		long long k;
		cin>>n>>k;
		long long res=0;
		for(long long i = 1;i<=n;i++){
			res =res + i%k;
		}
		cout<<res<<endl;
	}
	return 0;
}
