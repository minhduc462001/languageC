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
			a[i] = a[i]*a[i];
		}
		sort(a,a+n);
		
		bool check = false;
		for(int i = n-2;i>=1;i--){
			int l = 0, r = n-1;
			while(l<r){
				if(a[l]+a[r] == a[i]){
					check = true;
					i = 1;
					break;
				}
				if(a[l]+a[r] > a[i]) r--;
				if(a[l]+ a[r]<a[i]) l++;
			}
		}
		if(check) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
		
	}
	return 0;
}

