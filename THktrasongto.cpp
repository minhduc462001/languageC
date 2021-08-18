#include<bits/stdc++.h>
using namespace std;
bool snt(int n){
	if(n<2) return false;
	if(n==2||n==3) return true;
	else
		for(int i = 2;i<=sqrt(n);i++)
			if(n%i==0) return false;
	return true;
}
int main(){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cin>>a[i][j];
			if(snt(a[i][j])) a[i][j]=1;
			else a[i][j]=0;
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

