#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		
		for(int i = 0;i<n;i++){
			cin>>a[i];
		}
		for(int i = 0;i<n;i++){
			cin>>b[i];
		}
		int max = 1;
		for(int i = 0;i<n;i++){
			int l=i,r=n-1;
			int tong1 =a[l], tong2=b[l], dem = 0;
			while(l<r){
				if()
			}
			if(max<dem) max = dem;
		}
		cout<<max<<endl;
	}
	return 0;
}
