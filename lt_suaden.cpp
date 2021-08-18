#include<bits/stdc++.h>
using namespace std;
//
//int main(){
//	int n,k,b;
//	cin>>n>>k>>b;
//	int a[b];
//	vector<int> h;
//	for(int i=0;i<b;i++){
//		cin>>a[i];
//		h.push_back(a[i]);
//	}
//	if(n==1){
//		cout<<1;
//		return 0;
//	}
//	sort(h.begin(),h.end());
//	
//	if(h.back()!=n){
//		h.push_back(n);
//	}
//	if(h[0]!=1){
//		h.push_back(1);
//	}
//	int dem = 0;
//	vector<int> v;
//	int m = h[1]-h[0];
//	for(int i = 0;i<h.size()-1;i++){
//		v.push_back(h[i+1]-h[i]);
//		m = max(m,h[i+1]-h[i]);
//	}
//	sort(v.begin(),v.end());
//	int i = 0;
//	for(i = v.size()-2;i>=0;i--){
//		if(m<k){
//			m+=v[i];
//			dem++;
//		}
//		else break;
//	}
//	if(i == -1) cout<<dem+1;
//	else cout<<dem;
//	return 0;
//}
//  1 2 3 4 5 6 7 8 10
//  2 1 1 1 1 1




//   2 10 1 5 9
//   1 2 5 9 10
// v:1 3 4 1
//   1 1 3 4

struct mark_light{
	int index;
	bool check;
};
int main(){
	int n,k,b;
	cin>>n>>k>>b;
	mark_light m[n+1];
	int a[b];
	
	for(int i = 1;i<=n;i++){
		m[i].index = i;
		m[i].check = true;
	}
	for(int i = 0;i<b;i++){
		cin>>a[i];
		m[a[i]].check = false;
	}
	int min_d = n;
	int z = 1;
	while(k<=n){
		int dem = 0;
		for(int i = z;i<=k;i++){
			if(m[i].check==false){
				dem++;
			}
		}
		k++;
		z++;
		min_d = min(min_d,dem);
	}
	
	cout<<min_d<<endl;
	
	return 0;
	
}
