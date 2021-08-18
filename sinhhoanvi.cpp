#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n){
	for(int i = 1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void sapxep(int a[],int x,int n){
	for(int i = x;i<n;i++){
		for(int j = i+1;j<=n;j++){
			if(a[i]>a[j]) swap(a[i],a[j]);
		}
	}
}
void xuli(int a[],int n){
	while(1){
		int i=0;
		for(i = n;i>0;i--){
			if(i==1) return;
			if(a[i-1]<a[i]) break;
		}
		
		for(int j = n;j>=i;j--){
			if(a[j]>a[i-1]){
				swap(a[j],a[i-1]);
				sapxep(a,i,n);
				print(a,n);
				break;
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		
		for(int i = 1;i<=n;i++){
			a[i] = i;
		}
		print(a,n);
		xuli(a,n);
		cout<<endl;
	}
	return 0;
}

