#include <bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		multimap<int,int> mp;
		for(int i = 0;i<n;i++){
			cin>>a[i];
			mp.insert(make_pair(abs(k-a[i]),a[i]));
			
		}
		stable_sort(mp.begin(),mp.end());
		for(int i = 0;i<n;i++){
			cout<<mp.second();
		}
		cout<<endl;
	}
	return 0;
}
