#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		long long a[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		int dem = 0;
		for(int i = 0;i<n;i++){
			if(x==a[i]) dem++;
		}
		if(dem==0) cout<<-1<<endl;
		else cout<<dem<<endl;
	}
	return 0;
}
