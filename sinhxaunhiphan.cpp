#include<bits/stdc++.h>
using namespace std;
void print(int a[], int n){
	for(int i = 0;i<n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void xuli(int a[], int n){
	a[n-1]++;
	for(int i = n-1;i>0;i--){
		if(a[i]>1){
			a[i-1]++;
			a[i]-=2;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		memset(a,0,sizeof(a));
		for(int i = 0;i<pow(2,n);i++){
			print(a,n);
			xuli(a,n);
		}
		cout<<endl;
	}
	return 0;
}

