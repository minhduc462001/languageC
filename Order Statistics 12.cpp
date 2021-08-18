#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		for(int i = 1;i<=n+1;i++){
			bool breakFor = true;
			for(int j = 0;j<n;j++){
				if(i==a[j]){
					breakFor = false;
					j=n;
				}
			}
			if(breakFor) {
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}
