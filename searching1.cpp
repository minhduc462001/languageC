#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
			
		}
		bool check = true;
		for(int i = 0;i<n;i++){
			if(a[i]==x) {
				check = false;
				cout<<i+1;
				break;
			}
		}
		if(check) cout<<"-1"<<endl;
		else cout<<endl;
	}
	return 0;
}
