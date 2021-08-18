#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int tongTrai =0, tongPhai =0;
		for(int i = 0;i<n;i++){
			cin>>a[i];
			tongPhai+=a[i];
		}
		tongPhai -=a[0];
		if(tongPhai ==0){
			cout<<"1"<<endl;
			continue;
		}
		for(int i = 1;i<=n;i++){
			tongTrai += a[i-1];
			tongPhai-=a[i];
			if(tongTrai == tongPhai){
				cout<<(i+1)<<endl;
				break;
			}
		}
		if(tongTrai!=tongPhai) cout<<"-1"<<endl;
	}
	return 0;
}
