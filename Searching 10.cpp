#include<bits/stdc++.h>
using namespace std;
bool snt(int n){
	if(n<2) return false;
	if(n==2||n==3) return true;
	if(n%2==0) return false;
	for(int i = 3;i<= sqrt(n);i+=2)
		if( n%i==0) return false;
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
//		vector<int> v;
//		bool breakWhile = false;
//		for(int i = 2;i<=n;i++){
//			if(snt(i)) v.push_back(i);
//		}
//		for(int i = 0;i<v.size();i++){
//			cout<<v[i]<<" ";
//		}
//		cout<<endl;
//		int size = v.size();
//		for(int i = 0;i<size;i++){
//			if(n==v[i]*v[i]){
//				breakFor = true;
//				cout<<v[i]<<" "<<v[i]<<endl;
//				break;
//			}
//			if (n==v[i]+v[n+1]){
//				breakFor = true;
//				cout<<v[i]<<" "<<v[i+1]<<endl;
//				break;
//			}
//		}
		
//		int l = 0, r = v.size()-1;
//		while(l<=r){
//			if(n==v[l]*v[l]){
//				breakWhile = true;
//				cout<<v[l]<<" "<<v[l]<<endl;
//				break;
//			}
//			if(v[l]+v[r]>n){
//				r--;
//				continue;
//			}
//			if(v[l]+v[r]<n){
//				l++;
//				continue;
//			}
//			if(v[l]+v[r]==n){
//				breakWhile = true;
//				cout<<v[l]<<" "<<v[r]<<endl;
//				break;
//			}
//		}
		bool check = true;
		for(int i = 2;i<=n;i++){
			if(snt(i)&&snt(n-i)){
				check = false;
				cout<<i<<" "<<n-i<<endl;
				break;
			}
		}
		if(check) cout<<"-1"<<endl;
	}
	return 0;
}
