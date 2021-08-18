#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,dem;
		cin>>n;
		for(int i = 2;i<=n;i++){
			dem = 0;
			while(n%i==0){
				dem++;
				n/=i;
			}
			if(dem){
				if(dem>0) cout<<i<<" "<<dem;
				if(n>i) cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
