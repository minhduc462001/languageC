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
		int b[n][m];
		int hang = n-1, cot = m-1;
		int dong = 0, dem = 1;
		while(dem<m*n){
			for(int i = dong;i<=cot;i++){
				b[dong][i] = a[dong][i];
				dem++;
			}
			for(int i = dong+1;i<=hang;i++){
				b[i][cot] = a[i][cot];
				dem++;
			}
			if(dong!=hang){
				for(int i = cot-1;i>=dong;i--){
					b[hang][i] = a[hang][i];
					dem++;
				}
			}
			if(dong!=cot){
				for(int i = hang-1;i>dong;i--){
					b[i][dong] = a[i][dong];
					dem++;
				}
			}
			hang--;
			cot--;
			dong++;
		}
		for(int i = 0;i<n;i++){
			for(int j = 0;j<m;j++){
				cin>>b[i][j];
			}
		}
		cout<<endl;
	}
	return 0;
}
