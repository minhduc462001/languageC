#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				cin>>a[i][j];
			}
		}
		vector<int> v;
		int dong = 0, cot = m-1, hang = n-1, gt = 1;
		while(gt<m*n){
			for(int i = dong;i<=cot;i++){
				v.push_back(a[dong][i]);
				gt++;
			}
			for(int i = dong+1;i<=hang;i++){
				v.push_back(a[i][cot]);
				gt++;
			}
			if(dong!=hang){
				for(int i = cot-1;i>=dong;i--){
					v.push_back(a[hang][i]);
					gt++;
				}
			}
			if(dong!=cot){
				for(int i = hang - 1;i> dong;i--){
					v.push_back(a[i][dong]);
					gt++;
				}
			}
			dong++;cot--;hang--;
		}
		for(int i = n*m-1;i>=0;i--){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

