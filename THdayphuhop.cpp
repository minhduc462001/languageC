#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for(int i = 0;i<n;i++){
			cin >>a[i];
		}
		for(int i = 0;i<n;i++){
			cin >>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		bool check = true;
		for(int i = 0;i<n;i++){
			if(a[i]>b[i]){
				check = false;
				cout<<"NO"<<endl;
				break;
			}
		}
		if(check) cout<<"YES"<<endl;
	}
	return 0;
}

