#include <bits/stdc++.h>
int m = 1e9+7;
using namespace std;
struct matrix{
	long long c[2][2];
	matrix(){
		c[0][0] = 0;
		c[0][1] = 1;
		c[1][0] = 1;
		c[1][1] = 1;
	}
};
matrix operator*(matrix a, matrix b){
	matrix res;
	for(int i = 0;i<=1;i++){
		for(int j = 0;j<=1;j++){
			res.c[i][j] = 0;
			for(int k = 0; k<=1;k++){
				res.c[i][j] = (res.c[i][j]+(a.c[i][k]*b.c[k][j]%m))%m;
			}
			
		}
	}
	return res;
}
matrix pm(matrix a, long long n){
	if(n==1) return a;
	matrix x = pm(a,n/2);
	if(n%2!=0) return x*x*a;

	return x*x;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		matrix a;
		a = pm(a,n);
		cout<<a.c[0][1]<<endl;
	}
	return 0;
}
