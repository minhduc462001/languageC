#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		int i = 0;
		for(i = 0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		i--;
		while(k>0){
			cout<<a[i]<<" ";
			i--;
			k--;
		}
		cout<<endl;
	}
	return 0;
}

