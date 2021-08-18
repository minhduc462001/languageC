#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n){
	for(int i = 1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
int a[21];
void khoitao(int n){
	for(int i = 1;i<=n;i++){
		a[i] = i; 
	}
}
bool check = true;
void xuli(int n,int k){
	int i = k;
	while(i>0&&a[i]==n-k+1) i-=1;
	if(i<=0) check = false;
	else{
		a[i]+=1;
		for(int j = i+1;j<=k;j++){
			a[j] = a[j-1] +1;
		}
	}
}
void sinh(int n, int k){
	khoitao(k);
	while(check){
		xuli(n,k);
		print(a,k);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		sinh(n,k);
		cout<<endl;
	}
	return 0;
}

