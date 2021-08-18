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
		int dem = 0;
		for(int i = a[0];i<=a[n-1];i++){
			bool check = false;
			for(int j = 0;j<n;j++){
				if(i==a[j]){
					check = true;
					break;
				}
			}
			if(!check) dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}

