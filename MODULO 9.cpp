#include <bits/stdc++.h>
int m = 1e9+7;
using namespace std;
long long tohop(int n,int k){
	long long c[n+1][n+1];
	c[0][0]=1%m;
	for(int i = 1;i<=n;i++){
		c[i][0]=1%m;
		c[i][i]=1%m;
		for(int j=1;j<i;j++){
			c[i][j]=(c[i-1][j-1]%m+c[i-1][j]%m)%m;
		}
	}
	return c[n][k]%m;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<tohop(n,k)<<endl;
	}
	return 0;
}
