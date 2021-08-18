#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		cin>>a[0];
		long long tong = a[0];
		for(int i=1;i<n;i++){
			cin>>a[i];
			if(i<k) tong += a[i];
		}

		long long Max = tong;
		int l = 0, r = k;
		int ll = 0,lr = k-1;
		while(r<n){
			tong = tong - a[l] + a[r];
			if(Max<tong){
				Max = tong;
				ll = l+1;
				lr = r;
			}
			r++;
			l++;
		}
		for(int i = ll;i<=lr;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
