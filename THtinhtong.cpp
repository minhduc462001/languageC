#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll dem = n+1;
		if(n==1){
			cout<<1<<endl;
			continue;
		}

		for(int i = 2;i<=sqrt(n);i++){
			if(n%i==0){
				dem += i;
				if(n%(n/i)==0){
					dem+=n/i;
				}
			}
			if(i==sqrt(n)){
				dem-=sqrt(n);
			}
		
		}
		cout<<dem<<endl;
	}
	return 0;
}

