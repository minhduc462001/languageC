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
		
		int l = 0, r = n-1;
		while(l<r){
			if(a[l]<=a[r]){
				cout<<r-l<<endl;
				break;
			}
		}
	}
	return 0;
}
