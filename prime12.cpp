#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> v;
		v.clear();
		for(int i = 2;i<=n;i++){
			while(n%i==0){
				v.push_back(i);
				n/=i;
			}
		}
		if(k>v.size()) cout<<"-1"<<endl;
		else cout<<v[k-1]<<endl;
	}
	return 0;
}
