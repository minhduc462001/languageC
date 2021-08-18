#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int dem = 0;
		int l = 0, r = n-1,m=r;
		int sum = 0;
			while(l<r){
				
				sum = a[l]+a[r];
				if(sum==k){
					dem ++;
					l++;
					if(l==r-1){
						m = r--;
						l=0;
					}
				} 
				if(sum>k){
					l=0;
					m = r--;
				}
				if(sum<k) {
					r=m;
					l--;
				}
			}
			
		cout<<dem<<endl;
	}
	return 0;
}
