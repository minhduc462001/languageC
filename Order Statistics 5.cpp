#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
//		vector<int> v;
		for(int i = 0;i<n;i++){
			cin>>a[i];
		//	v.push_back(a[i]);
		}
		int max = 0;
		for(int i = 0;i<n-1;i++){
			for(int j = i+1;j<n;j++){
				if(max<a[j]-a[i]) max = a[j]-a[i];
			}
		}
		if(max!=0)
			cout<<max<<endl;
		else cout<<-1<<endl;
//		bool breakW = false;
//		sort(v.begin(),v.end());
//		int vt[2]={0};
//		int l = 0, r = v.size()-1;
//		while(l<r){
//			for(int i = 0;i<n;i++){
//				if(v[l]==a[i]) vt[0] = i;
//				if(v[r]==a[i]) vt[1] = i;
//			}
//			if(vt[0]<vt[1]){
//				breakW = true;
//				cout<<v[r]-v[l]<<endl;
//				break;
//			}
//			l++;
//			r--;
//		}
//		
//		if(!breakW) cout<<-1<<endl;
	}
	return 0;
}
