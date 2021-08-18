#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i = 0; i<n;i++){
			cin>>a[i];
			a[i] = a[i]*a[i];
			
		}
		sort(a,a+n);
		bool search = false;
		for(int i = n-1;i>1;i--){
			int j = 0; int k = i-1;
			while(j<k){
				if(a[j]+a[k]==a[i]){
					search = true;
					break;
			}
				if(a[j]+a[k]>a[i]) k--;
				if(a[j]+a[k]<a[i]) j++;
			}		
		}
		if(search) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
