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
		int i = 0;
		for(i = 0;i<n-1;i++){
			for(int j = i+1;j<n;j++){
				if(a[i]==a[j]){
					cout<<a[i]<<endl;
					i = n+1;
					break;
				}
			}
		}
		if(i==n-1) cout<<"NO"<<endl;
	}
	return 0;
}

