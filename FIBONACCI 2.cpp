#include <bits/stdc++.h>
using namespace std;
long long m = 10e9+7;
struct matrix{
	long long int f[2][2];
	matrix(){
		f[0][0]=0;
		f[0][1]=1;
		f[1][0]=1;
		f[1][1]=1;
	}
};
matrix operator*(matrix a, matrix b){
	matrix r;
	for(int i = 0;i<=1;i++)
		for(int j = 0;j<=1;j++){
			r.f[i][j] = 0;
			for(int k = 0;k<=1;k++)
				r.f[i][j] = (r.f[i][j] +(a.f[i][k]*b.f[k][j]%m))%m;
		}
	return r;
}
matrix pm(matrix a, long long int n){
	if(n==1) return a;
	matrix x = pm(a,n/2);
	if(n%2!=0) return x*x*a;
	return x*x;
}
long long int check(long long int n){
	matrix a;
	a=pm(a,n);
	return a.f[0][1];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		bool brearFor = false;
		if(n==1||n==2||n==3||n==5||n==8||n==13) cout<<"YES"<<endl;
		else if(n>20){
			matrix a;
			a=pm(a,n);
			cout<<a.f[0][1]<<endl;
			for(long long int i = n/2;i<=n;i++){
				if(n==check(i)) {
					brearFor = true;
					cout<<"YES"<<endl;
					break;
				}
			}
			if(!brearFor) cout<<"NO"<<endl;
		}
		else cout<<"NO"<<endl;
		
	}
	return 0;
}
