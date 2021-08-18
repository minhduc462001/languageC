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
		int tong = 0;
		for(int i = 0;i<n;i++){
			if(a[i]==a[i+1]){
				dem++;
			}
			else if(a[i]!=a[i+1]&&dem>1){
				tong = tong +dem;
				dem = 1;
			}
		}
		cout<<tong<<endl;
	}
	return 0;
}

