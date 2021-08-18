#include<bits/stdc++.h>  
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long> a;
		a.clear();
		a.push_back(-1);
		for(int i = 0;i<n;i++){
			long long temp;
			cin>>temp;
			a.push_back(temp);
		}
		long long maxS = a[1];
		long long maxE = a[1];
		for(int i = 2;i<=n; i++){
			if(maxE>0 ) maxE += a[i];
			else maxE = a[i];
			maxS = max(maxS,maxE);
			
		}
		cout<<maxS<<endl;
	}
}
