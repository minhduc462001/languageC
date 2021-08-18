#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int res = 0, dem;
		for(int i = a[0]+1;i<a[n-1];i++){
			dem = 0;
			for(int j = 0;j<n;j++){
				if(i!=a[j]) dem ++;
			}
			if(dem == n) res++;
		}
		
		cout<<res<<endl;
	}
	return 0;
}
