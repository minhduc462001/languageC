#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		int dem = 1;
		for(int i = 0;i<n-1;i++){
			for(int j = i+1;j<n;j++){
				if(a[i]==a[j]){
					dem++;
					cout<<a[i]<<endl;
					i=n;
					break;
				}
			}
		}
		if(dem==1) cout<<"NO"<<endl;
	}
	return 0;
}
