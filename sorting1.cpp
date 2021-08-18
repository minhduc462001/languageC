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
		int l = 0, r = n-1; 
		for(int i = 0;i<n/2+1;i++){
			if(n%2 == 0){
				if(i==n/2){
					break;
				}
				cout<<a[n-i-1]<<" "<<a[i]<<" ";
			}
			else {
				
				if(i==n/2){
					cout<<a[i];
					break;
				}
				cout<<a[n-i-1]<<" "<<a[i]<<" ";
			}
			
		}
		cout<<endl;
	}
	return 0;
}
