#include <bits/stdc++.h>
const long long m = 1e9+7;
using namespace std;
long long mulMod(long long a, long long b, long long m){
	if(b==0) return 0;
	long long tam = mulMod(a,b/2,m);
	if(b%2 == 0) return (2*(tam%m))%m;
	return (a%m+2*(tam%m))%m;
}
long long powMod(long long a, long long b, long long m)
{
    if(b==0)return 1;
    long long x=powMod(a,b/2,m);
    if(b%2==0)return x*x%m;
    return a*(x*x%m)%m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,x;
		cin>>n>>x;
		long long a[n];
		for(long long i = 0;i<n;i++){
			cin>>a[i];
		}
		long long P=0;
		for(long long i = n-1;i>=0;i--){
			long long du = powMod(x,i,m);
			P = P%m + mulMod(a[n-i-1],powMod(x,i,m),m)%m;
		}
		cout<<P<<endl;
		
	}
	return 0;
}

