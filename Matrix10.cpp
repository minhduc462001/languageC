#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m];
		int b[n][m];
		for(int i=0;i<n;i++){
			for(int j = 0;j<m;j++){
				cin>>a[i][j];
				b[i][j] = a[i][j];
			}
		}
		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				
				if(a[i][j]==1){
					int ii = i;
					int jj = j;
					for(int p = 0;p<n;p++){
						for(int q = 0;q<m;q++){
							if(p==ii){
								b[p][q] = 1;
							}
							else {
								if(q==jj){
									b[p][q] = 1;
								}
							}
							
						}
					}
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j = 0;j<m;j++){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
		
	}
	return 0;
}
