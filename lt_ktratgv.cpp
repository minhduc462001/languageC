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
		int i = 0;
		bool c = false;
		for(i = n-1;i>=1;i--){
			int l = 0, r = n-1;
			while(l<r){
				if(a[l]+a[r]==a[i]){
					c = true;
					i=0;
					break;
				}
				if(a[l]+a[r]>a[i]) r--;
				if(a[l]+a[r]<a[i]) l++;
			}
		}
		if(!c) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
// 3 1 4 6 5
// 1 3 4 5 6
// 1 9 16 25 36





