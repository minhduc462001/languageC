#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int dem = 1;
		int tam = 0;
		for(int i = 0;i<n;i++){
			if(a[i]==a[i+1]){
				dem++;
			}
			else{
				if(dem%2==1){
					cout<<a[i]<<endl;
					break;
				}
				dem = 1;
			}
		}
	}
	return 0;
}

