#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				cin>>a[i][j];
			}
		}
		
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n;j++){
				if(i%2==0) cout<<a[i][j]<<" ";
				else {
					cout<<a[i][n-1-j]<<" ";
				}
				
			}
		}
		cout<<endl;
	}
	return 0;
}
