#include <bits/stdc++.h>
using namespace std;
// dung upper_bound
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i =0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
//		vector<int> v(a,a+n);
		int dem = 0;
//		for(int i=0;i<n-1;i++){
//			for(int j = i+1;j<n;j++){
//				if(a[j]-a[i]<k) dem ++;
//				if(a[j]-a[i]>=k){
//					break;
//				}
//			}
//		}
		int l = 0, r=1;
		while(l<r&&r<n){
			if(a[r]-a[l]<k){
				dem++;
				r++;
			}
			else if(a[r]-a[l]>=k){
				l++;
				r=l+1;
			}
		}
//		vector<int>::iterator up;
//		up=std::upper_bound(v.begin(),v.end(),k);
//		cout<<up-v.begin()<<endl;
		cout<<dem<<endl;
	}
	return 0;
}
