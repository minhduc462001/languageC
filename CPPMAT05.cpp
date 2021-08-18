#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		int sum_row[n] = {0};
		int sum_col[n] = {0};
		for(int i= 0;i<n;i++){
			for(int j = 0;j<n;j++){
				cin>>a[i][j];
				sum_row[i] +=a[i][j];
			}
		}
		for(int i= 0;i<n;i++){
			for(int j= 0;j<n;j++){
				sum_col[i]+=a[j][i];
			}
		}
		sort(sum_row,sum_row+n);
		sort(sum_col,sum_col+n);
		int Max = max(sum_col[n-1],sum_row[n-1]);
		int hieu[n] = {0};
		int dem = 0;
		for(int i= 0;i<n;i++){
			hieu[i] = Max-sum_row[i];
			dem +=hieu[i];
		}
		cout<<dem<<endl;
//		for(int i= 0;i<n;i++){
//			cout<<sum_col[i]<<" ";
//		}
//		cout<<endl;
	}
	return 0;
}
