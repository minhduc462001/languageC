#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long a[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i = 1;i<=k;i++){
			cout<<a[n-i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
