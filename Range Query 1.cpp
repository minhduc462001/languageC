#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,Q,L,R;
		cin>>n>>Q;
		int a[n];
		
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		while(Q--){
			cin>>L>>R;
			int sum =0;
			for(int i = L;i<=R;i++){
				sum = sum+ a[i-1];
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}
