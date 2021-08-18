#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][n];
		int b[n][n];
		
		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				cin>>a[i][j];
				b[j][j]==a[i][j];
			}
		}
		
		for(int i = 0;i<n;i++){
			int t = i;
			for(int j = 0;j<m;j++){
				int k = j;
				if(a[i][j]==1) {
					b[i][j]=1;
					b[t][k]=1;
					t++;
				}
				
				
			}
		}
		cout<<endl;
	}
	return 0;
}
