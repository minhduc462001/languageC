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
		sort(a,a+n);
		
		int dem=1;
		for(int i = 0;i<n-1;i++){
			if(a[i]=a[i+1]) dem++;
			else dem = 1;
		}
		
		if(dem == n) cout<<"-1"<<endl;
		
		else cout<<a[0]<<" "<<a[1]<<endl;
	}
	return 0;
}
