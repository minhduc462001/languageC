#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>k>>n;
		int a[k][n];
		vector<int> v;
		v.clear();
		for(int i = 0;i<k;i++){
			for(int j = 0;j<n;j++){
				cin>>a[i][j];
				v.push_back(a[i][j]);
			}
		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
