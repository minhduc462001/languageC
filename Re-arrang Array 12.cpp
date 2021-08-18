#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0;i<n;i++)
			cin>>a[i];
		if(n==1){
			cout<<a[0]<<endl;
		}
		else{
			long long max = a[0];
			long long res;
			for(int i = 0;i<n-1;i++){
				res = a[i];
				for(int j = i+1;j<n;j++){
					res = res * a[j];
					if(res == 0) break; 
					if(max<res){
						max = res;
					}
				}
			}
		cout<<max<<endl;
		}
	}
	return 0;
}
