#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		long long uc = __gcd(a,b);
		long long bc = (a*b)/uc;
		cout<<bc<<" "<<uc<<endl;
	}
	return 0;
}

