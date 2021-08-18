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
		for(long long i = 0;i<n;i++){
			bool breakFor = true;
			for(long long j = 0;j<n;j++){
				if(i==a[j]){
					cout<<i<<" ";
					breakFor = false;
					break;	
				}	
			}
			if(breakFor) cout<<-1<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}
