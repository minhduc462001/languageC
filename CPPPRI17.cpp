#include<bits/stdc++.h>
using namespace std;
bool snt(long long n){
	if(n<2) return false;
	if(n==2||n==3) return true;
	for(int i = 2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long l,r;
		cin>>l>>r;
		int dem = 0;
		for(long long i = l;i<=sqrt(r);i++){
			if(snt(i)) {
				dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
