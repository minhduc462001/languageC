#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		
		long long a[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
			
		}
		
		sort(a,a+n);
		int l = 0, r = n-1;
		long long tong = a[l] + a[r];
		
		bool check = true;
//		for(int i = 0;i<n;i++){
			while(l<r){
				cout<<l <<" "<<r<<endl;
				
				if(tong>=k){
					r--;
					tong = a[l]+a[r];
				continue;
				}
				if(tong<k){
					l++;
					tong = tong+a[l];
					if(tong == k){
						check = false;
						cout<<"YES"<<endl;
						break;
					}
				}
			}
			
		if(check) cout<<"NO"<<endl;
	}
	return 0;
}
