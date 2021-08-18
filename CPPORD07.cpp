#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		vector<int> v;
		//deque<int> d;
		int ptmax = INT_MIN;
		for(int i = 0;i<n;i++){
			cin>>a[i];
			if(i<k){
				v.push_back(a[i]);
				ptmax = max(a[i], ptmax);
			}
		}
		cout<<ptmax<<" ";
		int l = 1 ,r = k, dem = k-1;
		while(r<n){
			bool check = false;
			if(ptmax<=a[r]){
				check == true;
				v.push_back(a[r]);
				dem++;
			}
			v.push_back(a[r]);
			if(dem-l==-2 && !check){
				v.push_back(a[r]);
				ptmax = a[r];
				dem++;
			}
			for(int i = l;i<=r;i++){
				ptmax = max(ptmax,v[i]);
			}
			cout<<ptmax<<" ";
			r++;
			l++;
		}
		
		
		
		
//		while(!d.empty()&&a[r]>a[d.back()]){
//			d.pop_back();
//		}
//		cout<<a[d.back()-2];
////		//cout<<a[d.back()];		
//		for(r = k;r<n;r++){
//			cout<<a[d.back()]<<" ";
//			d.push_back(r);
//			if(!d.empty()&&d.front() <l){
//				d.pop_back();
//				
//			}
//			while(!d.empty()&&a[l]>a[d.back()]){
//					d.pop_back();
//			}
//			l++;
//		}
		
		
		
		
//		int maxx = a[0];
//		for(int i = 0;i<k;i++){
//		//	d.push_back(i);
//			maxx = max(maxx, a[i]);
//			
//		}
//		cout<<maxx<<" ";
//		int dem = 1;
//		for(int i = k;i<n;i++){
//			dem++;
//			if(dem==k){
//				maxx = a[i];
//				dem = 1;
//			}
//			if(a[i]<=maxx){
//				cout<<maxx<<" ";
//			}
//		}
//		// 1 2 3 1 4 5 2 3 6
//		// 1 2 3 4
// index : 0 1 2 3 4 5 6
		// 3 3 4 5 5 5 6
		
//		int l = 0, r = k;
//		
//		while(l<k){
//			d.push_back(l);
//			l++;r++;
//		}
//		
//		while(!d.empty()&&a[l]>a[d.back()]){
//			d.pop_back();
//		}
//		//cout<<a[d.back()]<<" ";
//		for(r = k;r<n;r++){
//			cout<<a[d.back()]<<" ";
//			if(!d.empty()&&d.front() < l-k+1){
//				d.push_back(l);
//				
//			}
//			while(!d.empty()&&a[l]>a[d.back()]){
//					d.pop_back();
//			}
//			l++;
//		}
//		sort(v.begin(), v.end());
//		for(int i = k;i<n;i++){
////			cout<<v.back()<<" ";
//			int dem = 1;
//			dem++;
//			if(a[i]>v.back()||dem==k-1){
//				v.push_back(a[i]);
//				sort(v.begin(), v.end());
//				dem = 1;
//			}
//				
//			v.erase(v.begin()+1);
//		}
//		cout<<v.back()<<endl;
		cout<<endl;
	}
	return 0;
}

