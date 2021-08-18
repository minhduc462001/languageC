#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int len = min(n,m);
		int a[n], b[m];
		long long tongA[n]={0}, tongB[m]={0};
		cin>>a[0];
		tongA[0] = a[0];
		for(int i = 1;i<n;i++){
			cin>>a[i];
			tongA[i] = a[i]+tongA[i-1];
		}
		cin>>b[0];
		tongB[0] = b[0];
		for(int i = 1;i<m;i++){
			cin>>b[i];
			tongB[i] = b[i] + tongB[i-1];
		}
		long long MAX = max(tongA[n-1], tongB[n-1]);
		int j = 0;
		vector<long long> v1;
		while(j<len){
			long long vA = tongA[j];
			for(int i = j+1;i<m;i++){
				vA = b[i] + vA;
			}
			v1.push_back(vA);
			j++;
		}
		int k = 0;
		while(k<len){
			long long vB = tongB[k];
			for(int i = k+1;i<n;i++){
				vB = a[i] + vB;
			}
			v1.push_back(vB);
			k++;
		}
		
		sort(v1.begin(),v1.end());
		int Max = max(v1.back(),MAX);
		cout<<Max<<endl;
	}
	return 0;
}

