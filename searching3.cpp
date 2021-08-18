#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n-1];
		for(int i = 0;i<n-1;i++){
			cin>>a[i];
			
		}
		long long dem ;
		for(int i = 1;i<=n;i++){
			dem = 1;
			for(int j = 0; j<n-1;j++){
				if(i!=a[j]) dem++;
				else continue;
				
			}
			if(dem == n) cout<<i;
		}
		cout<<endl;
	}
	return 0;
}
