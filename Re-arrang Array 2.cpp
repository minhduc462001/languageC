#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		unsigned long long a[n];
		for(long long i = 0;i<n;i++){
			cin>>a[i];
		}
		long long dem = 0;
		for(long long i = 0;i<n;i++){
			
			if(a[i]!=0){
				dem++;
				cout<<a[i]<<" ";
			}
		}
		for(int i=1;i<=n-dem;i++){
			cout<<0<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}
